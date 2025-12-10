#include <stdio.h>
#include <locale.h>

int main()
{
    int num;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um numero inteiro positivo para a tabuada: ");
    scanf("%d", &num);
    if (num > 0)
    {
        for (int i = 0; i <= num; i++)
        {
            printf("%d, ", i);
        }
    }
    else
    {
        printf("\nNumero invalido! Digite um numero inteiro positivo.");
        scanf("%d", &num);
    }
    printf("FIM!");
    return 0;
}