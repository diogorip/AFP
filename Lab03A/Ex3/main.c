#include <stdio.h>

int main() {
    char letra = 'A';
    int ano = 2025;
    double fator = 1.123456;
    printf("A variavel letra tem o valor: %c\n", letra);
    letra = 'Z';
    printf("A variavel letra tem agora o valor: %c\n", letra);
    printf("A variavel ano tem o valor: %d\n", ano);
    printf("A variavel fator tem um valor inicial: %f\n", fator);
    fator = 9.999;
    printf("A variavel fator tem agora o valor: %f\n", fator);
    return 0;
}
