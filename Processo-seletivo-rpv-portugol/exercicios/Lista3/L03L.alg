algoritmo " Leitura de Valores "
// Função : valores positivos
// Autor : Nicoly Rodrigues
// Data : 23/08/2025
// Seção de Declarações
var
num,maior,menor :inteiro
nomecom,resp :caracter

inicio
// Seção de Comandos
maior:=0
menor:=0

Escreval("Efetua a leitura de valores positivos inteiros :")
repita

   Escreva("Digite um valor :")
   Leia(num)
   se num<0 entao
      limpatela
      Escreval("MAIOR DIGITADO VALOR = ",maior)
      Escreval("MENOR DIGITADO VALOR = ",menor)
   fimalgoritmo
fimse
se num>maior entao
   maior:=num
fimse
se menor=0 entao
   menor:=num
fimse
se num<menor entao
   menor:=num
fimse
ate(num<0)


fimalgoritmo

