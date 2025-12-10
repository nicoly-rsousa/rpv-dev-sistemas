algoritmo "semnome"
// Função :
// Autor :
// Data : 19/08/2025
// Seção de Declarações
var
idade : inteiro
inicio
// Seção de Comandos
Escreval("Situação Eleitoral")
Escreva("Digite sua idade: ")
Leia(idade)
se(idade<16) entao
   Escreva("Não Vota")
senao
   se(idade<18) entao
      Escreva("Voto Opcional")
   senao
      se(idade<70) entao
         Escreva("Voto Obrigatório")
      senao
         Escreva("Voto Opcional")
      fimse
   fimse
fimse


fimalgoritmo
