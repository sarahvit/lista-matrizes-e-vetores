#include <stdio.h>

#define li 4
#define co 4

int main() {
    int matriz[li][co];
    int i, j;
    int countMaiorQue10 = 0;

    
    printf("Digite os valores da matriz %dx%d:\n", li, co);
    for (i = 0; i < li; i++) {
        for (j = 0; j < co; j++) {
            printf("Valor na posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < li; i++) {
        for (j = 0; j < co; j++) {
            if (matriz[i][j] > 10) {
                countMaiorQue10++;
            }
        }
    }

   
    printf("\nA matriz possui %d valores maiores que 10.\n", countMaiorQue10);

    return 0;
}