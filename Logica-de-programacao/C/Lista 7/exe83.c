#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[20];
    srand(time(NULL));
    
    printf("Numeros gerados: ");
    for(int i = 0; i < 20; i++) {
        vetor[i] = rand() % 100;
        printf("%d ", vetor[i]);
    }
    
    for(int i = 0; i < 19; i++) {
        for(int j = 0; j < 19 - i; j++) {
            if(vetor[j] > vetor[j+1]) {
                int temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
            }
        }
    }
    
    printf("\n\nNumeros ordenados: ");
    for(int i = 0; i < 20; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    return 0;
}
