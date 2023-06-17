#include <stdio.h>

#define ROWS 4
#define COLS 4

void encontrarMaiorValor(int matriz[ROWS][COLS], int *linhaMaior, int *colunaMaior) {
    int i, j;
    int maiorValor = matriz[0][0];

    *linhaMaior = 0;
    *colunaMaior = 0;

    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            if (matriz[i][j] > maiorValor) {
                maiorValor = matriz[i][j];
                *linhaMaior = i;
                *colunaMaior = j;
            }
        }
    }
}

int main() {
    int matriz[ROWS][COLS];
    int i, j;
    int linhaMaior, colunaMaior;

    printf("Digite os valores da matriz %dx%d:\n", ROWS, COLS);
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("Valor na posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    encontrarMaiorValor(matriz, &linhaMaior, &colunaMaior);

    printf("\nMaior valor encontrado: %d\n", matriz[linhaMaior][colunaMaior]);
    printf("Localização: [%d][%d]\n", linhaMaior, colunaMaior);

    return 0;
}