import { Request, Response } from "express";
import { getFeriadosNacionais } from "../services/brasilApi.service";
import { paraFormatoBrasileiro } from "../utils/dateFormatter";
import { feriadosEstaduaisPorUf } from "../data/feriadosEstaduais";

interface FeriadoResposta {
    data: string;
    nome: string;
    type: "NACIONAL" | "ESTADUAL";
}

/**
 * GET /api/v1/feriados/:ano?uf=SP
 *
 * Regras aplicadas sobre a resposta da BrasilAPI:
 * 1) data convertida de yyyy-mm-dd para dd/mm/yyyy (PT-BR)
 * 2) campo "type" normalizado para "NACIONAL" ou "ESTADUAL"
 */
export async function listarFeriados(req: Request, res: Response) {
    const ano = req.params.ano as string;
    const uf = req.query.uf as string | undefined;

    if (!/^\d{4}$/.test(ano)) {
        return res.status(400).json({ erro: 'Parâmetro "ano" inválido. Use o formato YYYY, ex: 2026.' });
    }

    try {
        const feriadosNacionais = await getFeriadosNacionais(ano);

        let resultado: FeriadoResposta[] = feriadosNacionais.map((feriado) => ({
            data: paraFormatoBrasileiro(feriado.date),
            nome: feriado.name,
            type: "NACIONAL",
        }));

        if (uf) {
            const ufNormalizada = uf.toUpperCase();
            const feriadosDoEstado = feriadosEstaduaisPorUf[ufNormalizada] || [];

            const feriadosEstaduaisFormatados: FeriadoResposta[] = feriadosDoEstado.map((feriado) => ({
                data: paraFormatoBrasileiro(`${ano}-${feriado.date}`),
                nome: feriado.name,
                type: "ESTADUAL",
            }));

            resultado = [...resultado, ...feriadosEstaduaisFormatados].sort((a, b) => {
                const dataA = a.data.split("/").reverse().join("");
                const dataB = b.data.split("/").reverse().join("");
                return dataA.localeCompare(dataB);
            });
        }

        return res.status(200).json(resultado);
    } catch (error: any) {
        if (error.response?.status === 404) {
            return res.status(404).json({ erro: "Nenhum feriado encontrado para o ano informado." });
        }
        console.error("[feriados] erro ao consultar BrasilAPI:", error.message);
        return res.status(502).json({ erro: "Falha ao consultar o serviço de feriados." });
    }
}
