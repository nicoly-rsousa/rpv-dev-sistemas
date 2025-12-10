#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int cont = 6;
    while (cont < 11)
    {
        printf("%d ", cont);
        cont = cont + 1;
    }
    printf("Acabou!");
    return 0;
}
