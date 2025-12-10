#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vect[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int valor_recebido = 0;

    for (int i = 0; i <= 9; i++)
    {
        vect[i] = i;
        if (vect[i] % 2 == 0)
        {
            valor_recebido = 5;
            printf("vetor[%d] = %d\n", i, valor_recebido);
        }
        else
        {
            valor_recebido = 3;
            printf("vetor[%d] = %d\n", i, valor_recebido);
        }
    }
    return 0;
}