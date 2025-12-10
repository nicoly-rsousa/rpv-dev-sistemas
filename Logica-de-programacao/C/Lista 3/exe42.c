#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int contr = 0, cont = 0;

    printf("Digite um número inteiro e positivo qualquer: ");
    scanf("%d", &cont);
    if (cont > 0)
    {
        while (cont >= 0)
        {
            printf("%d ", cont);
            cont--;
        }
        printf("Acabou!");
    }
    else
    {
        printf("Numero Invalido!");
    }
    return 0;
}
