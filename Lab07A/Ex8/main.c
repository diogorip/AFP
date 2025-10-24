#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];
    char caractere;
    int contador = 0;

    printf("Introduza a frase: ");
    fgets(frase, sizeof(frase), stdin);

    printf("Introduza o carácter a contabilizar: ");
    scanf(" %c", &caractere);

    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == caractere) {
            contador++;
        }
    }

    printf("\"%s\" tem %d letra%c \'%c\'.\n", frase, contador, (contador > 1) ? 's' : ' ', caractere);

    return 0;
}
