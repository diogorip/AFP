#include <stdio.h>

int main() {
    int tabuada, valor, resultado, resposta;

    printf("Qual a tabuada a estudar (número inteiro positivo)? ");
    scanf("%d", &tabuada);

    printf("### VAMOS ESTUDAR A TABUADA DO %d ###\n", tabuada);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = ", tabuada, i);
        scanf("%d", &resposta);

        resultado = tabuada * i;

        if (resposta == resultado) {
            printf("Certo!\n");
        } else {
            printf("Errado: %d x %d = %d!!!\n", tabuada, i, resultado);
        }
    }

    return 0;
}
