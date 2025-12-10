#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int tab, lim;

    printf("\nDigite o valor de tab: ");
    scanf("%d", &tab);
    printf("\nDigite o valor do limite: ");
    scanf("%d", &lim);
    for (int cont = 1; cont <= lim; cont++)
    {
        printf("%d * %d = %d \n", tab, cont, tab * cont);
    }
    return 0;
}
