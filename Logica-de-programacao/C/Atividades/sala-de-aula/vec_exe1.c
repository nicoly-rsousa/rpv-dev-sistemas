#include <stdio.h>
#include <math.h>
#define TAM 5

int main()
{
    int vec1[TAM], vec2[TAM], vec3[TAM];

    for (int i = 0; i < TAM; i++)
    {
        printf("Digite dois valores dois vetores: ");
        scanf("%d%d", &vec1[i], &vec2[i]);
        vec3[i] = vec1[i] + vec2[i];
    }
    for (int i = 0; i < TAM; i++)
    {
        printf("%d\t", vec3[i]);
    }
    return 0;
}