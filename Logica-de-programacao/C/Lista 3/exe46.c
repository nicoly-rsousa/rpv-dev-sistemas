#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int cont = 6, result = 0;
    while (cont <= 100)
    {

        result = result + cont;
        cont = cont + 2;
    }
    printf("SOMA entre 6 + 8 + 10 + 12 + 14 + ... + 98 + 100 = %d", result);
    return 0;
}