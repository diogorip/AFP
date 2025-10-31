#include <stdio.h>

void imprimirTabuada(int numero) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}

int main() {
    int numero;
    printf("Digite o número para a tabuada: ");
    scanf("%d", &numero);
    imprimirTabuada(numero);
    return 0;
}
