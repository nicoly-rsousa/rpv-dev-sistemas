#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    for (int i = 0; i <= 40; i = i + 5)
    {
        printf("%d ", i);
    }
    printf("Acabou!");

    return 0;
}