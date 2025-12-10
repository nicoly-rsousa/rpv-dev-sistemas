#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    for (int i = 100; i >= 0; i = i - 10)
    {
        printf("%d ", i);
    }
    printf("Acabou!");

    return 0;
}