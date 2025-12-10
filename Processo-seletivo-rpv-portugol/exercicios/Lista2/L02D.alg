algoritmo "semnome"
// Função :
// Autor :
// Data : 21/08/2025
// Seção de Declarações

var
n1, n2, n3, n4, media,exame, result :real
inicio
// Seção de Comandos
Escreva("Digite a primeira nota: ")
Leia(n1)
Escreva("Digite a segunda nota: ")
Leia(n2)
Escreva("Digite a terceira nota: ")
Leia(n3)
Escreva("Digite a quarta nota: ")
Leia(n4)
media:=(n1+n2+n3+n4)/4

se(media>=7) entao
   Escreval("--------------------------------------------")
   Escreval("Média total MAIOR que 7 = ", media:2:2)
   Escreval("Aluno Aprovado, Média MAIOR que 5!")
   Escreval("--------------------------------------------")
fimalgoritmo
fimse
Escreval("--------------------------------------------")
Escreval("Sua média foi = ", media:2:2 )
Escreval("MENOR QUE 7, FAÇA O EXAME PARA NOVA MÉDIA")
Escreva("Qual foi sua nota o exame? ")
Leia(exame)
result:=(exame+media)/2

se(result>=5) entao
Escreval("--------------------------------------------")
Escreval("Aprovado no exame, nova média total = ", result:2:2)
Escreval("Nota Anterior = ", media:2:2)
Escreval("--------------------------------------------")
senao
Escreval("--------------------------------------------")
Escreval("O aluno não foi aprovado!")
Escreval("Média total MENOR que 7 = ", media:2:2)
Escreval("Média total depois do exame menor que 5 = ", result:2:2)
Escreval("--------------------------------------------")


fimse



fimalgoritmo

