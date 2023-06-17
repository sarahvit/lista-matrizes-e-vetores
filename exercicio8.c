#include <stdio.h>

#define N 10

int main() {
    float vetor[N];
    int i, countNegativos = 0;
    float somaPositivos = 0;

    
    printf("Digite os valores do vetor de %d numeros reais:\n", N);
    for (i = 0; i < N; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }


    for (i = 0; i < N; i++) {
        if (vetor[i] < 0) {
            countNegativos++;
        } else {
            somaPositivos += vetor[i];
        }
    }


    printf("\nQuantidade de números negativos: %d\n", countNegativos);
    printf("Soma dos numeros positivos: %.1f\n", somaPositivos);

    return 0;
}
