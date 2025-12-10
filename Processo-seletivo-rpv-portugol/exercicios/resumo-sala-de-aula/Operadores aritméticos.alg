algoritmo "operadores aritméticos"
// Função : Teste operadores aritméticos
// Autor : Rodrigo Vilela
// Data : 18/08/2025
// Seção de Declarações 
var
n1, n2, res :real
inicio
// Seção de Comandos 
Escreva("Digite o valor 1: ")
Leia(n1)
Escreva("Digite o valor 2: ")
Leia(n2)

res :=n1+n2
Escreval(n1,"+",n2,"=",res)
res :=n1-n2
Escreval(n1,"-",n2,"=",res)
res :=n1*n2
Escreval(n1,"*",n2,"=",res)
res :=n1/n2
Escreval(n1,"/",n2,"=",res:10:2)
res :=n1^n2
Escreval(n1,"^",n2,"=",res)

fimalgoritmo
