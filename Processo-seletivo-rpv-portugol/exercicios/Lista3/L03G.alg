algoritmo "Fibonacci "
// Função : Fibonacci até o décimo quinto termo
// Autor : Nicoly Rodrigues
// Data : 23/08/2025
// Seção de Declarações
var
x:vetor[0..15] de inteiro
i:inteiro

inicio
// Seção de Comandos
x[0]:=0
x[1]:=1

para i de 2 ate 15 faca
   x[i]:=x[i-2]+x[i-1]
fimpara
para i de 1 ate 15 faca
   Escreva(x[i]," ")
fimpara

fimalgoritmo

