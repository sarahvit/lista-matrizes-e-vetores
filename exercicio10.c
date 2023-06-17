#include <stdio.h>

#define N 10

int main() {
    int vetor[N];
    int i;

    printf("Digite os valores do vetor de %d posições:\n", N);
    for (i = 0; i < N; i++) {
        printf("Posição %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }


    for (i = 0; i < N; i++) {
        if (vetor[i] < 0) {
            vetor[i] = 0;
        }
    }

    printf("\nVetor modificado:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}