#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i = 0, cont = 1, mais_90 = 0, pesalt = 0, pesoaltd = 0;
    float peso = 0, alt = 0, medgrupo = 0;
    printf("DIGITE O PESO E A ALTURA DE 7 PESSOAS\n\n");

    while (cont != 8)
    {
        printf("Digite a altura da %d Pessoa em METROS: ", cont);
        scanf("%f", &alt);
        printf("Digite o peso da %d Pessoa: ", cont);
        scanf("%f", &peso);
        medgrupo = medgrupo + alt;
        if (peso > 90)
        {
            mais_90++;
        }
        if (peso < 50 && alt < 1.60)
        {
            pesalt++;
        }
        if (alt > 1.90 && peso > 100)
        {
            pesoaltd++;
        }

        printf("\n");
        cont++;
    }
    printf("Média da altura do grupo: %.2f \n", medgrupo / 7);
    printf("Pessoas que pesam mais de 90 kg: %d \n", mais_90);
    printf("Pessoas que medem mais de 1.90m pesam mais de 100Kg: %d \n", pesoaltd);
    return 0;
}
