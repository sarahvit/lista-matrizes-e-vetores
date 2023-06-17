#include <stdio.h>

#define SIZE 3

int calcularSomaDiagonalPrincipal(int matriz[SIZE][SIZE]) {
    int i, soma = 0;

    for (i = 0; i < SIZE; i++) {
        soma += matriz[i][i];
    }

    return soma;
}

int main() {
    int matriz[SIZE][SIZE];
    int i, j;

  
    printf("Digite os valores da matriz %dx%d:\n", SIZE, SIZE);
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("Valor na posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    
    int soma = calcularSomaDiagonalPrincipal(matriz);

    printf("\nA soma dos elementos da diagonal principal é: %d\n", soma);

    return 0;
}
