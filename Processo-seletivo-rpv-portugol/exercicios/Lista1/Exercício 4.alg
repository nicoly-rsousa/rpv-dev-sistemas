algoritmo "Polegadas"
// Função : Transforma o valor do comprimento de polegadas para centímetros
// Autor :  Nicoly Rodrigues
// Data : 18/08/2025
// Seção de Declarações
//4. Leia um valor de comprimento em polegadas e apresente-o convertido em
//centímetros. A formula de conversão é:C = P * 2, 54, sendo C o comprimento
//em centímetros e P o comprimento em polegadas.


var
comp, compc :real
inicio
// Seção de Comandos
Escreva("Digite o valor de comprimento em polegadas: ")
Leia(comp)
compc := comp*2.54

Escreval("O valor convertido em centímetros é" ,compc)
fimalgoritmo
