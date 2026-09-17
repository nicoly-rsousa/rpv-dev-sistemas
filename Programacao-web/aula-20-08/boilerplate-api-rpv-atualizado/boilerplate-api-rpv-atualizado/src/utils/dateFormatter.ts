/**
 * Converte "2026-04-21" -> "21/04/2026".
 * Feito com split/join (sem Date) pra evitar qualquer problema de fuso horario.
 */
export function paraFormatoBrasileiro(dataIso: string): string {
    const [ano, mes, dia] = dataIso.split("-");
    return `${dia}/${mes}/${ano}`;
}
