#include <stdio.h>

#define QUESTOES 10

int main() {
    char gabarito[QUESTOES];
    char respostasAluno[QUESTOES];
    int i;
    int nota = 0;

    printf("Digite o gabarito das questões (a, b, c ou d):\n");
    for (i = 0; i < QUESTOES; i++) {
        printf("Questão %d: ", i + 1);
        scanf(" %c", &gabarito[i]);
    }

    printf("\nDigite as respostas do aluno (a, b, c ou d):\n");
    for (i = 0; i < QUESTOES; i++) {
        printf("Questão %d: ", i + 1);
        scanf(" %c", &respostasAluno[i]);
    }

    for (i = 0; i < QUESTOES; i++) {
        if (respostasAluno[i] == gabarito[i]) {
            nota++;
        }
    }

    printf("\nA nota do aluno é: %d\n", nota);

 
    if (nota >= 7) {
        printf("O aluno foi aprovado!\n");
    } else {
        printf("O aluno não foi aprovado.\n");
    }

    return 0;
}
