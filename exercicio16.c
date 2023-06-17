#include <stdio.h>

#define SIZE 4

void calcularMaiorMatriz(int matriz1[SIZE][SIZE], int matriz2[SIZE][SIZE], int matrizMaior[SIZE][SIZE]) {
    int i, j;

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            if (matriz1[i][j] > matriz2[i][j]) {
                matrizMaior[i][j] = matriz1[i][j];
            } else {
                matrizMaior[i][j] = matriz2[i][j];
            }
        }
    }
}

int main() {
    int matriz1[SIZE][SIZE];
    int matriz2[SIZE][SIZE];
    int matrizMaior[SIZE][SIZE];
    int i, j;

    // Lendo a primeira matriz 4x4
    printf("Digite os valores da primeira matriz %dx%d:\n", SIZE, SIZE);
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("Valor na posição [%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    // Lendo a segunda matriz 4x4
    printf("\nDigite os valores da segunda matriz %dx%d:\n", SIZE, SIZE);
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("Valor na posição [%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    calcularMaiorMatriz(matriz1, matriz2, matrizMaior);

    printf("\nMatriz com os maiores valores:\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%d ", matrizMaior[i][j]);
        }
        printf("\n");
    }

    return 0;
}
