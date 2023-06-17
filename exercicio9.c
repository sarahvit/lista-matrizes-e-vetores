#include <stdio.h>

#define N 5

int main() {
    int vetor[N];
    int i, maior, menor, posicaoMaior, posicaoMenor;

    
    printf("Digite os 5 valores:\n");
    for (i = 0; i < N; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

   
    maior = vetor[0];
    menor = vetor[0];
    posicaoMaior = 0;
    posicaoMenor = 0;

    for (i = 1; i < N; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicaoMaior = i;
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
            posicaoMenor = i;
        }
    }

    printf("\nPosição do maior valor: %d\n", posicaoMaior + 1);
    printf("Posição do menor valor: %d\n", posicaoMenor + 1);

    return 0;
}