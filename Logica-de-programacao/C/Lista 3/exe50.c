#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{ // usando while
    int i[20], cont = 0, qtdb = 0, qtdc = 0;
    srand(time(NULL));
    printf("SORTEIO DE 20 NÚMEROS DE 0 a 10: \n \n");
    printf("Números acima de 5: ");
    while (cont < 20)
    {
        i[cont] = rand() % 11;

        if (i[cont] > 5)
        {
            printf("%d  ", i[cont]);
            qtdb = qtdb + 1;
        }
        if (i[cont] % 3 == 0 && cont[i]!=0)
        {
            qtdc = qtdc + 1;
        }
        cont++;
    }
    cont = 0;

    printf("\n\nNúmeros sorteados: ");
    while (cont < 20)
    {
        printf("%d  ", i[cont]);
        cont++;
    }

    printf("\nQuantidade de números acima de 5: %d \n", qtdb);
    printf("Quantidade de números divisíveis por 3: %d \n", qtdc);

    return 0;
}