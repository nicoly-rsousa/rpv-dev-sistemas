#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


void main() {
    int vetor[7];
    srand(time(NULL));
    
    printf("\n=== EXERCICIO 76 ===\n");
    printf("Numeros gerados: ");
    for(int i = 0; i < 7; i++) {
        vetor[i] = rand() % 100; // números de 0 a 99
        printf("%d ", vetor[i]);
    }
    printf("\n");
}
