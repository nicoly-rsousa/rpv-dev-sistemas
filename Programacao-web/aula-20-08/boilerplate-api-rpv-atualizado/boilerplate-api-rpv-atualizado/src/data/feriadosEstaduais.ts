// IMPORTANTE:
// A BrasilAPI (GET /api/feriados/v1/{ano}) retorna SOMENTE feriados nacionais.
// Nao existe, na API oficial, uma rota para feriados estaduais
// (ver discussao publica: github.com/BrasilAPI/BrasilAPI/issues/625).
//
// Para que nossa rota /api/v1/feriados/{ano}?uf=XX consiga classificar
// corretamente como "NACIONAL" ou "ESTADUAL", mantemos aqui um dataset
// complementar e local. Esta e apenas uma AMOSTRA para exemplificar o
// funcionamento -- em producao, substitua/complete por uma base propria.
export interface FeriadoEstadual {
    date: string; // formato MM-DD
    name: string;
}

export const feriadosEstaduaisPorUf: Record<string, FeriadoEstadual[]> = {
    SP: [{ date: "07-09", name: "Revolução Constitucionalista" }],
    BA: [{ date: "07-02", name: "Independência da Bahia" }],
    RJ: [
        { date: "04-23", name: "São Jorge" },
        { date: "11-20", name: "Zumbi dos Palmares" },
    ],
    MG: [{ date: "04-21", name: "Data Magna de Minas Gerais" }],
};
