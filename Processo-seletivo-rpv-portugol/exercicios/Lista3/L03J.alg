algoritmo "Média e soma "
// Função : somatório e a média aritmética dos numeros pares de 50 a 70
// Autor : Nicoly Rodrigues
// Data : 23/08/2025
// Seção de Declarações
var
media,soma,x :real
i,cont:inteiro

inicio
// Seção de Comandos
soma:=0
media:=0
cont:=0
para i de 50 ate 70  passo 2 faca
   Escreval("Valores pares: ",i)
   soma:=soma+i
   cont:=cont+1
fimpara
Escreval("--------------------------------------------------")
Escreval("SOMÁTORIO NÚMEROS PARES DE 50 A 70 = ",soma)
Escreval("MÉDIA NÚMEROS PARES DE 50 A 70 = ",soma/cont)
Escreval("--------------------------------------------------")

fimalgoritmo

