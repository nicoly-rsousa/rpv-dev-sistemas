algoritmo "Calculadora 1.0"
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
Escreval("Calculadora 1.0")
Escreval("1 - Soma")
Escreval("2 - Subtração")
Escreval("3 - Multiplicação")
Escreval("4 - Divisão")
Escreval("5 - Exponenciação")
Escreval("Escolha a Operação[1/2/3/4/5]")
Leia(oper)
se(oper<>"1") e (oper<>"2") e (oper<>"3") e (oper<>"4") e (oper<>"5")  entao
   Escreva("Operação Invalida!")
fimalgoritmo
fimse


Escreva("Digite o valor 1: ")
Leia(n1)
Escreva("Digite o valor 2 ")
Leia(n2)

se(oper="1") entao
res:=n1+n2
Escreval(n1," + ",n2,"=",res)
senao


se(oper="2") entao
   res:=n1-n2
   Escreval(n1," - " ,n2, "=",res)
senao


   se(oper="3") entao
      res:=n1*n2
      Escreval(n1," * ",n2, "=",res)
   senao


      se(oper="4") entao
         res:=n1/n2
         Escreval(n1," / ",n2, "=",res)
      senao


         se(oper="5") entao
            res:=n1^n2
            Escreval(n1,=" ^ ",n2, "=",res)
         senao
            Escreva("Operação Invalida Invalida!")
         fimse
      fimse
   fimse
fimse
fimse

fimalgoritmo
