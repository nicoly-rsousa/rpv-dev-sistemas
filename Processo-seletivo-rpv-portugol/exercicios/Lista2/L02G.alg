algoritmo "semnome"
// Função :
// Autor :
// Data : 21/08/2025
// Seção de Declarações
var
n :vetor[1..4] de inteiro
j :inteiro
inicio
j:=1
Escreval("APRESENTA SOMENTE OS NÚMEROS QUE SÃO DIVISÍVEIS POR 2 E 3")
para j de 1 ate 4 faca
   Escreva("Escreva Numero", j,": ")
   Leia(n[j])
fimpara
Escreval("-----------------------------------------------------")
Escreval("Número(s) Divisível por 2 e por 3: " )

para j de 1 ate 4 faca
   se n[j] mod 2 = 0 entao
      se n[j] mod 3 = 0 entao
         Escreval(n[j])
      fimse
   fimse
fimpara
Escreval("-----------------------------------------------------")



fimalgoritmo
