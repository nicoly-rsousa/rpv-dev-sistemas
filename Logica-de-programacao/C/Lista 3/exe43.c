#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int cont = 30;
    while (cont > 0)
    {
        if (cont % 4 == 0)
        {
            printf("[%d] ", cont);
        }
        else
        {
            printf("%d ", cont);
        }
        cont--;
    }

    return 0;
}
