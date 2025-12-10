#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vect[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int soma = 0;

    for (int i = 0; i <= 9; i++)
    {
        soma = soma + vect[i] + 5;
        printf("vetor[%d] = %d\n", i, soma);
    }
    return 0;
}