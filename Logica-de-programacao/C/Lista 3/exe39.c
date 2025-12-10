#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int cont = 10;
    while (cont != 2)
    {
        printf("%d ", cont);
        cont--;
    }
    printf("Acabou!");
    return 0;
}
