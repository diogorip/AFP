#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int main() {
    int a, b;
    printf("Introduza o primeiro número a somar: ");
    scanf(" %d", &a);
    printf("Introduza o segundo número a somar: ");
    scanf(" %d", &b);
    printf("A soma é %d\n", soma(a, b));

    return 0;
}
