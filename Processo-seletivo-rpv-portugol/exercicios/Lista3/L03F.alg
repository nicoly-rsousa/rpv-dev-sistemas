algoritmo "calculo potência"
// Função : valor de uma potência de uma base
//qualquer elevada a um expoente qualquer
// Autor : Nicoly Rodrigues
// Data : 23/08/2025
// Seção de Declarações
var
j,b,i, result,expoente :inteiro

inicio
// Seção de Comandos
result:=0
Escreva("Digite o valor da base: ")
Leia(b)
Escreva("Digite o valor do expoente: ")
Leia(expoente)
para i de 0 ate expoente  faca
   se i=0 entao
      result:=1
   senao
      se i=1  entao
         result:=b
      senao
         result:=result*b
      fimse
   fimse
fimpara

Escreval(b," ^ ",expoente, " = ", result)

fimalgoritmo
