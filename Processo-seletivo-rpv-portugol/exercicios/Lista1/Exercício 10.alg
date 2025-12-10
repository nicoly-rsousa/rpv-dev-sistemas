algoritmo "semnome"
// Função :
// Autor :
// Data : 18/08/2025
// Seção de Declarações
// 10. Escreva um programa de ajuda para vendedores. A partir de um valor total
//lido, mostre:
//• O total a pagar com desconto de 10%;
//• O valor de cada parcela, no parcelamento de 3× sem juros;
//• A comissão do vendedor, no caso da venda ser a vista (5% sobre o valor
//com desconto)
//• A comissão do vendedor, no caso da venda ser parcelada (5% sobre o
//valor total)
var
valort,totalap,totalpar,comissaoav,comissaopar :real
inicio
// Seção de Comandos
Escreva("Digite o valor total : ")
Leia(valort)
totalap := valort -(valort*0.10)
totalpar := valort / 3
comissaoav := totalap*0.05
comissaopar := valort*0.05
Escreval("O total a pagar com desconto de 10%: R$", totalap:2:2)
Escreval("O valor de cada parcela, no parcelamento de 3× (sem juros) R$:", totalpar:2:2)
Escreval("Comissão do vendedor, venda a vista: R$", comissaoav:2:2)
Escreval("Comissão do vendedor, venda parcelada R$", comissaopar:2:2)



fimalgoritmo
