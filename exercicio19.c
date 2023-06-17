#include <stdio.h>

#define LINHAS 5
#define COLUNAS 4

int main() {
    int matriz[LINHAS][COLUNAS];
    int i, j;
    int maiorNotaFinal = 0;
    int indiceMaiorNotaFinal = 0;
    int somaNotasFinais = 0;

    
    printf("Digite as informações dos alunos:\n");
    for (i = 0; i < LINHAS; i++) {
        printf("Aluno %d:\n", i + 1);
        for (j = 0; j < COLUNAS; j++) {
            if (j == 0) {
                printf("Número de matrícula: ");
            } else if (j == 1) {
                printf("Média das provas: ");
            } else if (j == 2) {
                printf("Média dos trabalhos: ");
            }

            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }

   
    for (i = 0; i < LINHAS; i++) {
        int notaFinal = matriz[i][1] + matriz[i][2];
        matriz[i][3] = notaFinal;

        somaNotasFinais += notaFinal;

        if (notaFinal > maiorNotaFinal) {
            maiorNotaFinal = notaFinal;
            indiceMaiorNotaFinal = i;
        }
    }

   
    printf("Matrícula do aluno com maior nota final: %d\n", matriz[indiceMaiorNotaFinal][0]);

    
    float mediaNotasFinais = (float)somaNotasFinais / LINHAS;
    printf("Média aritmética das notas finais: %.2f\n", mediaNotasFinais);

    return 0;
}
