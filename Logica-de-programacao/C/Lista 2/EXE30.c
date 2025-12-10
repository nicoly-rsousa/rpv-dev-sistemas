#include <stdio.h>

int main()
{
    float triag = 0, a = 0, b = 0, c = 0;
    printf("Digite o segmento dos tres lados do triangulo ");
    scanf("%f%f%f", &a, &b, &c);
    if ((a > b + c) || (b > a + c) || (c > a + b))
    {
        printf("O triangulo NÃO EXISTE!\n");
    }
    else if (!(a > b + c) || (b > a + c) || (c > a + b))
    {
        printf("É POSSIVEL FORMAR UM TRIANGULO COM ESSAS MEDIDAS \n");
        if (a == b && a == b && a == c)
        {
            printf("EQUILÁTERO: todos os lados iguais");
        }
        else if ((a == b && a != c) || (b == c && b != a) || (c == a && c != b))
        {
            printf("ISÓSCELES: dois lados iguais");
        }
        else
        {
            printf("ESCALENO: todos os lados diferentes");
        }
    }

    return 0;
}