#include <stdio.h>
#include <string.h>

int main() {
    char s1[100];
    int contador = 0;

    printf("Introduza uma frase a analisar: ");
    fgets(s1, sizeof(s1), stdin);

    for (int i = 0; s1[i] != '\0'; i++) {
        if(s1[i] == ' ') {
            contador++;
        }
    }

    printf("A frase tem %d palavras\n", contador);

    return 0;
}
