algoritmo "Celcius"
// Função : Transforma a temperatura de Fahrenheit para Celcius
// Autor :  Nicoly Rodrigues
// Data : 18/08/2025
// Seção de Declarações
//3. Leia uma temperatura em graus Fahrenheit e apresente-a convertida em
//graus Celsius. A formula de conversão é: C=5.0*(F-32.0)/9.0, sendo C a
//temperatura em Celsius e F a temperatura em Fahrenheit.


var
celcius, fahrenheit :real
inicio
// Seção de Comandos
Escreva("Digite a temperatura em Fahrenheit: ")
Leia(fahrenheit)
celcius := 5.0*(fahrenheit-32.0)/9.0
Escreval("A temperatura em Celcius é" ,celcius)
fimalgoritmo
