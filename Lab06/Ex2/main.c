#include <stdio.h>

int main() {
    int numeros[10];
    int maior = numeros[0];

    for (int i = 0; i < 10; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    printf("O maior número é: %d\n", maior);

    return 0;
}
