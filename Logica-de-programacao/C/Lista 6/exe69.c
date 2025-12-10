#include <stdio.h>

int main()
{
    int primeiroTermo, razao, soma = 0;

    printf("Digite o primeiro termo da PA: ");
    scanf("%d", &primeiroTermo);
    printf("Digite a razao da PA: ");
    scanf("%d", &razao);

    printf("\nOs 10 primeiros elementos da PA:\n");
    for (int i = 0; i < 10; i++)
    {
        int termo = primeiroTermo + (i * razao);
        printf("%d ", termo);
        soma += termo;
    }

    printf("\n\nSoma de todos os valores: %d\n", soma);

    return 0;
}
