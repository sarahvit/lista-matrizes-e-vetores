#include <stdio.h>

#define N 10

int main() {
    int vetor[N];
    int i, count = 0;

   
    printf("Digite os valores do vetor de %d posições:\n", N);
    for (i = 0; i < N; i++) {
        printf("Posição %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

   
    for (i = 0; i < N; i++) {
        if (vetor[i] % 2 == 0) {
            count++;
        }
    }

 
    printf("\nO vetor possui %d valores pares: \n", count);

    return 0;
}
