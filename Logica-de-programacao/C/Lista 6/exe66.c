#include <stdio.h>
#include <locale.h>

int main()
{
    int num;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um numero para a tabuada: ");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d \n", num, i, (num * i));
    }

    return 0;
}