import axios from "axios";
import { BRASIL_API_BASE_URL } from "../config";

// Instancia unica do axios apontando pra BrasilAPI.
// Toda a "regra" do proxy fica isolada aqui: quem consome esse service
// nao precisa saber que existe uma API externa por tras.
const brasilApiClient = axios.create({
    baseURL: BRASIL_API_BASE_URL,
    timeout: 8000,
});

export interface FeriadoBrasilApi {
    date: string;
    name: string;
    type: string;
    fullName?: string;
}

export interface DddInfoBrasilApi {
    state: string;
    cities: string[];
}

/**
 * GET /api/feriados/v1/{ano}
 * Retorna os feriados NACIONAIS de um ano.
 */
export async function getFeriadosNacionais(ano: string): Promise<FeriadoBrasilApi[]> {
    const { data } = await brasilApiClient.get<FeriadoBrasilApi[]>(`/feriados/v1/${ano}`);
    return data;
}

/**
 * GET /api/ddd/v1/{ddd}
 * Retorna { state, cities } para um DDD (numero) especifico.
 */
export async function getInfoPorDdd(ddd: string): Promise<DddInfoBrasilApi> {
    const { data } = await brasilApiClient.get<DddInfoBrasilApi>(`/ddd/v1/${ddd}`);
    return data;
}
