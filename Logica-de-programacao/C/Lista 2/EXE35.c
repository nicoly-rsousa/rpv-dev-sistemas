#include <stdio.h>

int main()
{
    int tipo, dias;
    float km, total = 0;
    printf("Digite o tipo de carro alugado (1-Popular ou 2-Luxo): ");
    scanf("%d", &tipo);
    printf("Digite quantos dias de aluguel: ");
    scanf("%d", &dias);
    printf("Digite quantos Km foram percorridos: ");
    scanf("%f", &km);
    if (tipo == 1)
    {
        total = 90 * dias;
        if (km <= 100)
        {
            total = total + (km * 0.2);
        }
        else
        {
            total = total + (km * 0.1);
        }
        printf("Valor total : %.2f", total);
    }
    else if (tipo == 2)
    {
        total = 150 * dias;
        if (km <= 200)
        {
            total = total + (km * 0.3);
        }
        else
        {
            total = total + (km * 0.25);
        }
        printf("Valor total : %.2f", total);
    }
    return 0;
}