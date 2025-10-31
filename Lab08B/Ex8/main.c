#include <stdio.h>

int calcularFatorial(int numero) {
    int fatorial = 1;
    for (int i = 2; i <= numero; i++) {
        fatorial *= i;
    }
    return fatorial;
}

int main() {
    int numero;
    printf("Digite o número para o fatorial: ");
    scanf("%d", &numero);
    printf("O fatorial de %d é %d\n", numero, calcularFatorial(numero));
    return 0;
}
