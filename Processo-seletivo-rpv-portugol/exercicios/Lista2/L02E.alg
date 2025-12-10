algoritmo "semnome"
// Função :
// Autor :
// Data : 21/08/2025
// Seção de Declarações

var
a,b,c, delta, result1,result2, raiz :real
inicio
// Seção de Comandos
Escreva("Digite o valor de A: ")
Leia(a)
se (a=0)entao
   Escreval("Para ser uma Equação de 2 grau, o valor de A deve ser DIFERENTE de 0")
fimalgoritmo
fimse
Escreva("Digite o valor de B: ")
Leia(b)
Escreva("Digite o valor de C: ")
Leia(c)
delta:=b^2-(4*a*c)
Escreval("DELTA = ",delta)
se delta>0 entao
Escreval("Possui Duas Raízes Reais Distintas")
fimse
se delta=0 entao
Escreval("Possui Duas Raízes Reais Iguais")
fimse
se delta<0 entao
Escreval("(Raízes Complexas) - Não existe raiz quadrada de número negativo")
fimalgoritmo
fimse


raiz:=(raizq (delta))
result1:= (-b + raiz)/(2*a)
result2:= (-b - raiz)/(2*a)
Escreval("--------------------------------------------")
Escreval("Raízes = ", result1,"  e " ,result2)





fimalgoritmo

