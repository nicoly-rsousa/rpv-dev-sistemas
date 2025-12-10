#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vect[8] = {999, 999, 999, 999, 999, 999, 999, 999};

    for (int i = 0; i < 8; i++)
    {
        printf("vetor[%d] = %d\n", i, vect[i]);
    }
    return 0;
}