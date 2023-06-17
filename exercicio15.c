#include <stdio.h>

#define SIZE 5

void buscarValor(int matriz[SIZE][SIZE], int valor, int *linhaEncontrada, int *colunaEncontrada) {
    int i, j;

    *linhaEncontrada = -1; // Valor inicial para indicar que o valor não foi encontrado
    *colunaEncontrada = -1;

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            if (matriz[i][j] == valor) {
                *linhaEncontrada = i;
                *colunaEncontrada = j;
                return; // Valor encontrado, retorna da função
            }
        }
    }
}

int main() {
    int matriz[SIZE][SIZE];
    int valor, linhaEncontrada, colunaEncontrada;
    int i, j;

    printf("Digite os valores da matriz %dx%d:\n", SIZE, SIZE);
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("Valor na posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nDigite o valor a ser buscado: ");
    scanf("%d", &valor);

    buscarValor(matriz, valor, &linhaEncontrada, &colunaEncontrada);

    // Verificando se o valor foi encontrado e exibindo a localização ou a mensagem de "não encontrado"
    if (linhaEncontrada != -1 && colunaEncontrada != -1) {
        printf("\nValor %d encontrado na localização [%d][%d].\n", valor, linhaEncontrada, colunaEncontrada);
    } else {
        printf("\nValor %d não encontrado na matriz.\n", valor);
    }

    return 0;
}
