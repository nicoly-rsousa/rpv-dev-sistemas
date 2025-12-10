algoritmo "semnome"
// Função :
// Autor :
// Data : 21/08/2025
// Seção de Declarações
var
numero :vetor[1..3] de caracter
i, j :inteiro
x :caracter
inicio
// Seção de Comandos
para i de 1 ate 3 faca
   Escreva("Digite numero", i, ":")
   leia(numero[i])
fimpara
para i de 1 ate 2 faca
   para j de i+1 ate 3 faca
      se (numero[i]>numero[j]) entao
         x := numero[i]
         numero[i] :=numero[j]
         numero[j]:=x
      fimse
   fimpara
fimpara

para i de 1 ate 3 faca
   Escreval(i," - ", numero[i])
fimpara
fimalgoritmo
