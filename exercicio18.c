#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 4

void gerarMatriz(int matriz[SIZE][SIZE]) {
    int i, j;

    srand(time(NULL));

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            matriz[i][j] = rand() % 20 + 1;
        }
    }
}

void transformarMatrizTriangularInferior(int matriz[SIZE][SIZE]) {
    int i, j;

    for (i = 0; i < SIZE; i++) {
        for (j = i + 1; j < SIZE; j++) {
            matriz[i][j] = 0;
        }
    }
}

void imprimirMatriz(int matriz[SIZE][SIZE]) {
    int i, j;

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrizOriginal[SIZE][SIZE];
    int matrizTransformada[SIZE][SIZE];

    
    gerarMatriz(matrizOriginal);

    
    int i, j;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            matrizTransformada[i][j] = matrizOriginal[i][j];
        }
    }

 
    transformarMatrizTriangularInferior(matrizTransformada);

  
    printf("Matriz original:\n");
    imprimirMatriz(matrizOriginal);

    
    printf("\nMatriz transformada:\n");
    imprimirMatriz(matrizTransformada);

    return 0;
}
