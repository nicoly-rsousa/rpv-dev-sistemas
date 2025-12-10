algoritmo "semnome"
// Função :
// Autor :
// Data : 21/08/2025
// Seção de Declarações
{Ler dois valores numéricos inteiros e apresentar o resultado da diferença do maior pelo menor valor.}
var
n1, n2, result :inteiro
inicio
// Seção de Comandos
Escreval("Digite o primeiro número inteiro: ")
Leia(n1)
Escreval("Digite o segundo número inteiro: ")
Leia(n2)
se(n1>n2) entao
   result:= n1-n2
   Escreval(" Resultado: ",n1," - ",n2," = ",result )
senao
   result:= n2-n1
   Escreval(" Resultado: ",n2," - ",n1," = ",result )
fimse


fimalgoritmo
