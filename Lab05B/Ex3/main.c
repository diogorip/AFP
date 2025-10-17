#include <stdio.h>

int main() {
    char c;
    while (1) {
        printf("Introduza um carácter: ");
        scanf(" %c", &c);
        if (c >= 'a' && c <= 'z') {
            printf("‘%c’ é uma letra minúscula\n", c);
        } else if (c >= 'A' && c <= 'Z') {
            printf("‘%c’ é uma letra maiúscula\n", c);
        } else if (c >= '0' && c <= '9') {
            printf("‘%c’ é um dígito\n", c);
        } else {
            printf("‘%c’ não é letra nem dígito\n", c);
            break;
        }
    }
    printf("Fim do programa\n");
    return 0;
}
