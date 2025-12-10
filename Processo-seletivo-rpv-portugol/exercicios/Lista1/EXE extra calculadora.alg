algoritmo "Calculadora T"
// Função : Calculadora Teste
// Autor :  Nicoly Rodrigues
// Data : 20/08/2025
// Seção de Declarações

var
oper :caracter
n1,n2 :inteiro
result,soma,sub,divi,mult,expo :real

inicio
// Seção de Comandos
Escreva("Digite dois numeros inteiros:")
leia(n1)
leia(n2)
Escreval("Digite a eperação [+ para soma ]")
Escreval("Digite a eperação [- para subtração ]")
Escreval("Digite a eperação [* para multiplicação ]")
Escreval("Digite a eperação [/ para divisão ]")
Escreval("Ou escreva TUDO para ver todas as operações")
Escreva("Escreva:")
leia(oper)
se (oper="+") entao
   result := n1+n2
   Escreval("Soma: ",n1," + ",n2," = ",result)
senao
   se (oper="-") entao
      result := n1-n2
      Escreval("Subtração:",n1," - ",n2," = ",result)
   senao
      se (oper="*") entao
         result :=n1*n2
         Escreval("Multiplicacao: ",n1," * ",n2," = ",result)
      senao
         se (oper="/")entao
            result :=n1/n2
            Escreval("Divisao: ",n1," / ",n2," = ",result)
         senao
            se(oper="^") entao
               Escreval("Exponenciação: ", n1, " ^ ",n2, " = ",result)
            senao
               se(oper="tudo") entao
                  soma:=n1+n1
                  sub:=n1-n2
                  mult:=n1*n2
                  divi:=n1/n2
                  expo:=n1^n2
                  Escreval("Soma: ",n1," + ",n2," = ",soma)
                  Escreval("Subtração: ",n1," - ",n2," = ",sub)
                  Escreval("Multiplicacao ",n1," * ",n2," = ",mult)
                  Escreval("Divisao ",n1," / ",n2," = ",divi)
                  Escreval("Exponenciação ", n1, " ^ ",n2, " = ",expo)
               fimse
               Escreva("Operador Invalido!")
            fimalgoritmo
         fimse
      fimse
   fimse
fimse
fimse

fimalgoritmo
