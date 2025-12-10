#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int cont = 0, fim = 0, in = 0;
    printf("Digite o valor inicial da contagem: ");
    scanf("%d", &cont);
    printf("Digite o valor final da contagem: ");
    scanf("%d", &fim);
    printf("Digite o incremento: ");
    scanf("%d", &in);
    while (cont < fim)
    {
        printf("%d ", cont);
        cont = cont + in;
    }
    printf("Acabou!");

    return 0;
}
