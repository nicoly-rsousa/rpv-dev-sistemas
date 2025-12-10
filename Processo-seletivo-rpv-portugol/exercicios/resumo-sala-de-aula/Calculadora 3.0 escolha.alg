algoritmo "Calculadora 2.0"
// Função :
// Autor :
// Data : 19/08/2025
// Seção de Declarações
//Calculadora 1.0
var
n1,n2, res :real
oper :caracter

inicio
// Seção de Comandos
Enquanto (oper<>"6") faca

   Escreval("Calculadora 1.0")
   Escreval("1 - Soma")
   Escreval("2 - Subtração")
   Escreval("3 - Multiplicação")
   Escreval("4 - Divisão")
   Escreval("5 - Exponenciação")
   Escreval("6 - Sair")
   Escreval("Escolha a Operação[1/2/3/4/5] ou 6 para sair")
   Leia(oper)
   se(oper<>"1") e (oper<>"2") e (oper<>"3") e (oper<>"4") e (oper<>"5") e (oper<>"6")  entao
      Escreva("Operação Invalida!")
      Escreva("Digite uma opção válida[1/2/3/4/5] ou 6 para sair: ")
      Leia(oper)


   fimse


   se(oper="6") entao
      Escreva("Opção sair escolhida!")
   fimalgoritmo
fimse


Escreva("Digite o valor 1: ")
Leia(n1)
Escreva("Digite o valor 2 ")
Leia(n2)
escolha oper
caso "1"
   limpatela
   res:=n1+n2
   Escreval(n1," + ",n2,"=",res)
outrocaso

caso "2"
   limpatela
   res:=n1-n2
   Escreval(n1," - " ,n2, "=",res)
outrocaso

caso "3"
   limpatela
   res:=n1*n2
   Escreval(n1," * ",n2, "=",res)
outrocaso

caso "4"
   limpatela
   res:=n1/n2
   Escreval(n1," / ",n2, "=",res)
outrocaso

caso "5"
   limpatela
   res:=n1^n2
   Escreval(n1,=" ^ ",n2, "=",res)
outrocaso

   Escreva("Operação Invalida Invalida!")
fimescolha
fimenquanto
fimalgoritmo
