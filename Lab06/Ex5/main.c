#include <stdio.h>

#define MAX_ALUNOS 10

int main() {
    float notas[MAX_ALUNOS];
    float soma = 0;
    int i;

    printf("Introduza as notas dos alunos:\n");

    for (i = 0; i < MAX_ALUNOS; i++) {
        printf("Aluno nº %d: ", i + 1);
        scanf("%f", &notas[i]);

        if (notas[i] < 0 || notas[i] > 20) {
            printf("Nota inválida!\n");
            i--;
        } else {
            soma += notas[i];
        }
    }

    printf("\nNotas introduzidas:\n");
    for (i = 0; i < MAX_ALUNOS; i++) {
        printf("Aluno nº %d – %.1f valores\n", i + 1, notas[i]);
    }

    printf("Média: %.1f\n", soma / MAX_ALUNOS);

    return 0;
}
