import { useLocalStorage } from "../../rules/useLocalStorage"

export function Contato() {

    const teste = useLocalStorage()
    console.log('INSERINDO ENDERECO NOVO', teste.definirValoresDoLocalStorage('enderecos', JSON.stringify({ rua: 'Rua da Saudade', numero: 123 })))
    console.log('LOCALSTORAGE ENDERECOS', JSON.parse(teste.pegarValoresDoLocalStorage('enderecos')!))

    // CRIAR UM HOOK CHAMADO useAlert
    // ELE RETORNAR UMA FUNÇÃO CHAMADA 
    // RealizaAlerta, que recebe uma mensagem
    //  e da um return alert(mensagem)


    return (
        <>
            <h1>Pagina de Contato</h1>
        </>
    )
}