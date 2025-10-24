#include <stdio.h>
#include <string.h>

int main() {
    char nome[100], apelido[100];
    printf("Introduza o nome completo: ");
    fgets(nome, sizeof(nome), stdin);
    sscanf(nome, "%*[^ ] %s", apelido);
    printf("O apelido é %s!\n", apelido);
    return 0;
}
