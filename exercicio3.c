#include <stdio.h>
#include <math.h>

#define N 10

int main() {
    float numeros[N];
    float quadrados[N];
    int i;

    printf("Digite o conjunto de %d numeros reais:\n", N);
    for (i = 0; i < N; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%f", &numeros[i]);
    }


    for (i = 0; i < N; i++) {
        quadrados[i] = pow(numeros[i], 2);
    }

  
    printf("\nConjunto:\n");
    for (i = 0; i < N; i++) {
        printf("%.2f ", numeros[i]);
    }

   
    printf("\nAo quadrado:\n");
    for (i = 0; i < N; i++) {
        printf("%.2f ", quadrados[i]);
    }

    printf("\n");

    return 0;
}
