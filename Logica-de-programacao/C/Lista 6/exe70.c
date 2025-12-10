#include <stdio.h>

int main()
{
    int fib1 = 1, fib2 = 1, proximo;

    printf("Os 10 primeiros elementos da Sequencia de Fibonacci:\n");
    printf("%d %d ", fib1, fib2);

    for (int i = 2; i < 10; i++)
    {
        proximo = fib1 + fib2;
        printf("%d ", proximo);
        fib1 = fib2;
        fib2 = proximo;
    }

    printf("\n");

    return 0;
}