algoritmo "Polegadas"
// Função : Transforma o valor do comprimento em centímetros para polegadas
// Autor :  Nicoly Rodrigues
// Data : 18/08/2025
// Seção de Declarações
//5. Leia um valor de comprimento em centímetros e apresente-o convertido em
//polegadas. A formula de conversão é: P = C/ 2,54 , sendo C o comprimento
//em centímetros e P o comprimento em polegadas.

var
compc, compp :real
inicio
// Seção de Comandos
Escreva("Digite o valor de comprimento em centímetros: ")
Leia(compc)
compp := compc/2.54

Escreval("O valor convertido em polegadas é" ,compp)
fimalgoritmo
