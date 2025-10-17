#include <stdio.h>

int main() {
    int num1, num2, num3, maior, maiorTotal = 0;

    for (int i = 0; i < 10; i++) {
        printf("Introduza três números inteiros: ");
        scanf("%d %d %d", &num1, &num2, &num3);

        maior = num1;
        if (num2 > maior) maior = num2;
        if (num3 > maior) maior = num3;

        printf("O maior número é %d\n", maior);

        if (maior > maiorTotal) maiorTotal = maior;
    }

    printf("O maior número introduzido foi %d\n", maiorTotal);

    return 0;
}
