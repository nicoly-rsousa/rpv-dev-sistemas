algoritmo "semnome"
// Função :
// Autor :
// Data : 21/08/2025
// Seção de Declarações
var
n :vetor[1..5] de inteiro
maior,menor,i :inteiro
x :caracter
inicio
// Seção de Comandos
maior:=0
para i de 1 ate 5 faca
   Escreva("Digite numero", i, ": ")
   leia(n[i])
   se i=1 entao
      maior:=n[i]
      menor:=n[i]
   senao
      se n[i]>maior entao
         maior:=n[i]
      fimse
      se n[i]<menor entao
         menor:=n[i]
      fimse
   fimse

fimpara

Escreval("O MAIOR VALOR = ", maior)
Escreval("O MENOR VALOR = ",menor)
fimalgoritmo
