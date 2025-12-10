#include <stdio.h>

int main()
{
    int fibonacci[15];
    int i;

    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for (i = 2; i < 15; i++)
    {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    printf("Os 15 primeiros elementos da sequencia de Fibonacci sao:\n");
    for (i = 0; i < 15; i++)
    {
        printf("%d ", fibonacci[i]);
    }

    printf("\n");
    return 0;
}
