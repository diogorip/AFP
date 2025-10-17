#include <stdio.h>

int main() {
    char caracteres[10];
    char caractere;
    int i, ocorrencias = 0;

    printf("Introduza 10 caracteres:\n");
    for (i = 0; i < 10; i++) {
        scanf(" %c", &caracteres[i]);
    }

    printf("Introduza o caracter a pesquisar: ");
    scanf(" %c", &caractere);

    for (i = 0; i < 10; i++) {
        if (caracteres[i] == caractere) {
            ocorrencias++;
        }
    }

    if (ocorrencias > 0) {
        printf("O caracter '%c' tem %d ocorrências no vetor.\n", caractere, ocorrencias);
    } else {
        printf("O caracter '%c' não existe no vetor.\n", caractere);
    }

    return 0;
}
