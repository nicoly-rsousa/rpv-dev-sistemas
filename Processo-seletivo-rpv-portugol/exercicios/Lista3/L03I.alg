algoritmo "Média e soma "
// Função : somatório e a média aritmética dos 10 valores informados
// Autor : Nicoly Rodrigues
// Data : 23/08/2025
// Seção de Declarações
var
media, soma,x :real
i:inteiro

inicio
// Seção de Comandos
soma:=0
media:=0
Escreval("Digite 10 valores númericos: ")
para i de 1 ate 10 faca
   Escreva("Digite o ",i,"º valor: ")
   Leia(x)
   soma:=soma+x
   media:=soma/10
fimpara
Escreval("-----------------------------------")
Escreval("SOMÁTÓRIO = ",soma)
Escreval("MÉDIA = ", media)
Escreval("-----------------------------------")

fimalgoritmo

