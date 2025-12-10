algoritmo "Fahrenheit"
// Função : Transforma a temperatura de Celcius para Fahrenheit.
// Autor :  Nicoly Rodrigues
// Data : 18/08/2025
// Seção de Declarações
// 2-Leia uma temperatura em graus Celsius e apresente-a convertida
//em graus Fahrenheit. A formula de conversão é: F=C*(9.0/5.0)+32.0, sendo F a
//temperatura em Fahrenheit e C a temperatura em Celsius.

var
celcius, fahrenheit :real
inicio
// Seção de Comandos
Escreva("Digite a temperatura: ")
Leia(celcius)
fahrenheit := celcius*(9.0/5.0)+32.0

Escreval("A temperatura em fahrenheit" ,fahrenheit)
fimalgoritmo
