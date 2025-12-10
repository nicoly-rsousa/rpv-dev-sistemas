#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int cont = 100;
    while (cont >= 0)
    {
        printf("%d ", cont);
        cont = cont - 5;
    }
    printf("Acabou!");
    return 0;
}
