algoritmo "Salário a receber"
// Função : Calcula o salário a receber, considerando imposto e gratificação
// Autor : Nicoly Rodrigues
// Data : 18/08/2025
// Seção de Declarações
// 9. Receba o salário-base de um funcionário. Calcule e imprima o salário a
//receber, sabendo-se que esse funcionário tem uma gratificação¸ ao de 5%
//sobre o salário-base. Além disso, ele paga 7% de imposto sobre o saláriobase.
var
salario, salariog, salarioi, salariof :real
inicio
// Seção de Comandos
Escreva("Digite o valor do seu salario : ")
Leia(salario)
salariog :=salario*0.05
salarioi :=salario*0.07
salariof :=salario+salariog-salarioi
Escreval("Seu salário a receber tirando o imposto e adicionando a gratifição é " ,salariof)

fimalgoritmo
