algoritmo "semnome"
// Função :
// Autor :
// Data : 21/08/2025
// Seção de Declarações

var
n1, n2, n3, n4, media,result :real
inicio
// Seção de Comandos
Escreval("Digite a primeira nota: ")
Leia(n1)
Escreval("Digite a segunda nota: ")
Leia(n2)
Escreval("Digite a terceira nota: ")
Leia(n3)
Escreval("Digite a quarta nota: ")
Leia(n4)
media:=(n1+n2+n3+n4)/4

se(media>=5) entao

   Escreval("Aluno Aprovado, Média MAIOR que 5!")
   Escreval("Média total = ", media)

senao
   Escreval("O aluno não foi aprovado!")
   Escreval("Média total MENOR que 5 = ", media)
fimse



fimalgoritmo
