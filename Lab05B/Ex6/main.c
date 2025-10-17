#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Número inválido.\n");
    } else {
        for (i = 1; i <= num; i++) {
            factorial *= i;
        }
        printf("O fatorial de %d é %llu.\n", num, factorial);
    }

    return 0;
}
