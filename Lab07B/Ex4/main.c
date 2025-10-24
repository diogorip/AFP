#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    printf("Introduza a frase: ");
    fgets(s1, sizeof(s1), stdin);
    strcpy(s2, s1);
    printf("A frase copiada é: %s", s2);
    return 0;
}
