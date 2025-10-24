#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];

    printf("Introduza a 1ª frase: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Introduza a 2ª frase: ");
    fgets(s2, sizeof(s2), stdin);

    if (strcmp(s1, s2) == 0) {
        printf("As frases são iguais.\n");
    } else {
        printf("As frases são diferentes.\n");
    }

    return 0;
}
