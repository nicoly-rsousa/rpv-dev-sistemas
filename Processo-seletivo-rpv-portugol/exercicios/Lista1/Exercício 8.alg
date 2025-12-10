algoritmo "Premiação Concurso"
// Função : Calcula a premiação do 1°, 2° e 3° lugar de um concurso
// Autor : Nicoly Rodrigues
// Data : 18/08/2025
// Seção de Declarações
// 8-Faça um programa que receba o valor da premiação de um concurso que
//  será dividida entre três ganhadores. Sendo que da quantia total:
//• O primeiro ganhador recebera 46%;
//• O segundo receberá 32%;
//• O terceiro recebera o restante;
//Calcule e imprima a quantia ganha por cada um dos ganhadores.
var
valorprem,primeirog,segundog, terceirog :real
inicio
// Seção de Comandos
Escreva("Digite o valor da premiação : ")
Leia(valorprem)
primeirog :=valorprem*0.46
segundog :=valorprem*0.32
terceirog :=valorprem-primeirog-segundog
Escreval("Primeiro lugar, PARABENS!! você ganhou: " ,primeirog)
Escreval("Segundo lugar, PARABENS!! você ganhou: " ,segundog)
Escreval("Terceiro lugar, PARABENS!! você ganhou: " ,terceirog)
fimalgoritmo
