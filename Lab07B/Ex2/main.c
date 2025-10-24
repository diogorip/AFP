#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    int i;

    printf("Introduza a 1ª frase: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Introduza a 2ª frase: ");
    fgets(s2, sizeof(s2), stdin);

    for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) {
        if (s1[i] != s2[i]) {
            printf("As frases são diferentes.\n");
            return 0;
        }
    }

    printf("As frases são iguais.\n");
    return 0;
}
