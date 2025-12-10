algoritmo "Exemplo escolha"
// Função :
// Autor :
// Data : 20/08/2025
// Seção de Declarações
var
voto :caracter

inicio
// Seção de Comandos
Enquanto (voto<>"5") faca
Escreval("Pesquisa cidades:")
Escreval("1 - Cataguases")
Escreval("2 - Leopoldina")
Escreval("3 - Itamarati")
Escreval("4 - Miraí")
Escreval("5 - Sair")
Escreva("Digite o número da sua cidade: ")
Leia(voto)
escolha voto
caso "1"
   Escreval("Cidade escolhida foi Cataguases")
caso "2"
   Escreval("Cidade escolhida foi Leopoldina")
caso "3"
   Escreval("Cidade escolhida foi Itamarati")
caso "4"
   Escreval("Cidade escolhida foi Miraí")
outrocaso
   Escreva("Opção Inválida!")
fimescolha
fimenquanto
fimalgoritmo
