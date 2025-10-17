#include <stdio.h>

int main() {
    float numeros[10];
    float soma = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%f", &numeros[i]);
        soma += numeros[i];
    }

    printf("A soma dos números é: %.2f\n", soma);

    return 0;
}
