#include <stdio.h>

int main() {
    int n1, n2;

    printf("Introduza um numero inteiro: ");
    scanf("%d", &n1);

    printf("Introduza outro numero inteiro: ");
    scanf("%d", &n2);

    printf("** SOMA **\n");
    printf("%d + %d = %d\n", n1, n2, n1 + n2);

    printf("** SUBTRACAO **\n");
    printf("%d - %d = %d\n", n1, n2, n1 - n2);

    printf("** PRODUTO **\n");
    printf("%d * %d = %d\n", n1, n2, n1 * n2);

    printf("** DIVISAO (COM NUMEROS INTEIROS) **\n");
    printf("%d / %d = %d\n", n1, n2, n1 / n2);

    printf("** RESTO **\n");
    printf("%d %% %d = %d\n", n1, n2, n1 % n2);

    return 0;
}
