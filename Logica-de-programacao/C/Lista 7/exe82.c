#include <stdio.h>

int main()
{
    float notas[10], soma = 0, maior = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
        if (notas[i] > maior)
            maior = notas[i];
    }

    float media = soma / 10.0;
    printf("\na) Media da turma: %.2f\n", media);

    int acima = 0;
    for (int i = 0; i < 10; i++)
    {
        if (notas[i] > media)
            acima++;
    }
    printf("b) Alunos acima da media: %d\n", acima);

    printf("c) Maior nota: %.2f\n", maior);

    printf("d) Posicoes da maior nota: ");
    for (int i = 0; i < 10; i++)
    {
        if (notas[i] == maior)
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}