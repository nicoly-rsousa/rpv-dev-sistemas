import type { TypeForm } from "./form-rules";

interface IManipulaLocalStorage {
    pegar: (chaveDaColecao: string) => void
    definir: (chaveDaColecao: string, jsonDaColecao: string) => void
    limpar: (chaveDaColecao: string) => void
}

export function useLocalStorage() {
    function pegar(chaveDaColecao: string) {
        return localStorage.getItem(chaveDaColecao)
    }

    function definir(chaveDaColecao: string, jsonDaColecao: string) {
        return localStorage.setItem(chaveDaColecao, jsonDaColecao)
    }

    return {
        pegarValoresDoLocalStorage: pegar,
        definirValoresDoLocalStorage: definir
    }
}




