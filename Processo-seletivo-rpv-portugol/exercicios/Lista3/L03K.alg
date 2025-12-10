algoritmo " Area "
// Função : calcula valor total acumulado da área residencial.
// Autor : Nicoly Rodrigues
// Data : 23/08/2025
// Seção de Declarações
var
lar,comp,result,area :real
nomecom,resp :caracter

inicio
// Seção de Comandos
lar:=0
comp:=0
result:=0
area:=0
Escreval("Escreva todas medidas na mesma unidade de comprimento!")
Enquanto resp <> "nao" faca
   Escreva("Qual o nome do comodo a ser calculado: ")
   Leia(nomecom)
   Escreva("Entre com a largura do comodo: ")
   Leia(lar)
   Escreva("Entre com o comprimento do cômodo: ")
   Leia(comp)
   area:=(lar*comp)
   result:=result+area
   Escreva("Deseja calcular continuar a calcular a area da casa? ")
   Leia(resp)
fimenquanto
limpatela
Escreva("valor total acumulado da área residencial = ",result)
fimalgoritmo

