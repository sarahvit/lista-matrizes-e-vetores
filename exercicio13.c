#include <stdio.h>

#define SIZE 5

int main() {
    int matriz[SIZE][SIZE];
    int i, j;

   
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            if (i == j) {
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
    }

   
    printf("Matriz obtida:\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}