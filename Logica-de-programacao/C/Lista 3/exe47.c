#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int cont = 500, result = 0;
    while (cont >= 0)
    {

        printf("%d + ", cont);
        result = result + cont;
        cont = cont - 50;
    }
    printf("= %d", result);
    return 0;
}