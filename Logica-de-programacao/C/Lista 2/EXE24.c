/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float distancia = 0;
    printf("Qual distancia deseja percorrer em KM: ");
    scanf("%f", &distancia);
    if (distancia > 0 && distancia <= 200)
    {
        printf("Preço da passagem %.2f", distancia * 0.50);
    }
    else if (distancia > 200)
    {
        printf("Preço da passagem %.2f", distancia * 0.45);
    }
    else
    {
        printf("Distancia Invalida!");
    }

    return 0;
}