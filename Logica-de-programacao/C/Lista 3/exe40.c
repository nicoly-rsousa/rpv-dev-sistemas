#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int cont = 0;
    while (cont <= 18)
    {
        printf("%d ", cont);
        cont = cont + 3;
    }
    printf("Acabou!");
    return 0;
}
