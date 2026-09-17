import { Request, Response } from "express";
import { dddPorUf } from "../data/dddPorUf";
import { getInfoPorDdd } from "../services/brasilApi.service";

/**
 * GET /api/v1/ddd/
 * Retorna todos os DDDs do Brasil, separados por estado.
 */
export function listarTodosDdds(_req: Request, res: Response) {
    return res.status(200).json(dddPorUf);
}

/**
 * GET /api/v1/ddd/:uf
 * Retorna os DDDs de um estado especifico.
 */
export function listarDddsPorUf(req: Request, res: Response) {
    const uf = (req.params.uf as string).toUpperCase();
    const ddds = dddPorUf[uf];

    if (!ddds) {
        return res.status(404).json({ erro: `UF "${req.params.uf}" não encontrada. Use a sigla, ex: SP, RJ, MG.` });
    }

    return res.status(200).json({ uf, ddds });
}

/**
 * GET /api/v1/ddd/cities/:uf
 * Para cada DDD do estado, consulta a BrasilAPI e retorna as cidades atendidas.
 */
export async function listarCidadesPorDdd(req: Request, res: Response) {
    const uf = (req.params.uf as string).toUpperCase();
    const ddds = dddPorUf[uf];

    if (!ddds) {
        return res.status(404).json({ erro: `UF "${req.params.uf}" não encontrada. Use a sigla, ex: SP, RJ, MG.` });
    }

    try {
        const respostas = await Promise.all(
            ddds.map(async (ddd) => {
                const info = await getInfoPorDdd(ddd);
                return { ddd, state: info.state, cities: info.cities };
            })
        );

        return res.status(200).json({ uf, resultado: respostas });
    } catch (error: any) {
        console.error("[ddd/cities] erro ao consultar BrasilAPI:", error.message);
        return res.status(502).json({ erro: "Falha ao consultar o serviço de DDD." });
    }
}
