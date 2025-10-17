#include <stdio.h>

int main() {
    int n;

    printf("Introduza um número inteiro no intervalo [0 a 50]: ");
    scanf("%d", &n);

    printf("Números de 0 a %d por ordem ascendente:\n", n);
    for (int i = 0; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    printf("Números de %d a 0 por ordem descendente:\n", n);
    for (int i = n; i >= 0; i--) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
