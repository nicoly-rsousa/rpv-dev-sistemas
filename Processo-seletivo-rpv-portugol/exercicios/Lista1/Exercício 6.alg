algoritmo "Valor Produto"
// Função : Calcula o valor do produto com desconto de 12%
// Autor :  Nicoly Rodrigues
// Data : 18/08/2025
// Seção de Declarações
//6. Faça um programa que leia o valor de um produto e imprima o valor com
//desconto, tendo em vista que o desconto foi de 12%.

var
valorprod, prodf :real
inicio
// Seção de Comandos
Escreva("Digite o valor do produto : ")
Leia(valorprod)
prodf := valorprod - (valorprod*0.12)

Escreval("O valor do produto final com o desconto de 12% é " ,prodf)
fimalgoritmo
