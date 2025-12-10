#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vect[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int inicial = 9;

    for (int i = 0; i <= 9; i++)
    {
        printf("vetor[%d] = %d\n", i, inicial);
        inicial--;
    }
    return 0;
}