#include <stdio.h>

int isDigit(char c) {
    return c >= '0' && c <= '9';
}

int main() {
    char c;
    printf("Introduza um caractere: ");
    scanf(" %c", &c);
    if (isDigit(c)) {
        printf("O caractere é um dígito.\n");
    } else {
        printf("O caractere não é um dígito.\n");
    }
    return 0;
}
