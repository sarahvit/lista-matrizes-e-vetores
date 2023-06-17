#include <stdio.h>

#define N 5

int main() {
    float vetor[N];
    int codigo;
    int i;

    printf("Digite os valores do vetor de %d posições:\n", N);
    for (i = 0; i < N; i++) {
        printf("Posição %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

  
    printf("\nDigite o codigo (0 para finalizar, 1 para ordem direta, 2 para ordem inversa): ");
    scanf("%d", &codigo);

   
    if (codigo == 0) {
        printf("Programa finalizado.\n");
    } else if (codigo == 1) {
        printf("\nVetor na ordem direta:\n");
        for (i = 0; i < N; i++) {
            printf("%.2f ", vetor[i]);
        }
        printf("\n");
    } else if (codigo == 2) {
        printf("\nVetor na ordem inversa:\n");
        for (i = N - 1; i >= 0; i--) {
            printf("%.2f ", vetor[i]);
        }
        printf("\n");
    } else {
        printf("Codigo inválido.\n");
    }

    return 0;
}