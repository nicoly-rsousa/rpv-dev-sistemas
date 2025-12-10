#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    for (int i = 0; i <= 30; i = i + 3)
    {
        printf("%d ", i);
    }
    printf("Acabou!");
    return 0;
}
