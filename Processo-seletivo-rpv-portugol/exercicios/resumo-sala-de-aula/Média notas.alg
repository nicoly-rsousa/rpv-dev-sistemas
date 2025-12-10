algoritmo "Média Notas"
// Função : Obter média 2 notas
// Autor : Rodrigo Vilela
// Data : 18/08/2025
// Seção de Declarações
var
n1, n2, media :real
inicio
// Seção de Comandos
Escreva("Digite a nota 1: ")
Leia(n1)
Escreva("Digite a nota 2: ")
Leia(n2)

media :=(n1+n2)/2

se(media>=7) entao
   Escreva("Média = ",media, " - Aprovado")
senao
   Escreva("Média = ",media, " - Reprovado")
fimse
fimalgoritmo
