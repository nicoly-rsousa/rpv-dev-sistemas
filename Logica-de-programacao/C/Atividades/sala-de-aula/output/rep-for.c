#include <stdio.h>

int main()
{
    int cont, result = 0;

    for (; cont != 0;)
    {

        printf("Digite um novo valor:");
        scanf("%d", &cont);
        if (cont != 0)
        {
            result = result + 1;
        }
    }

    printf("Quantidade de repeticoes= %d", result);
    return 0;
}