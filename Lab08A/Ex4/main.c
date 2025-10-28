#include <stdio.h>

int maior(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int num1, num2;
    printf("Introduza dois números: ");
    scanf("%d %d", &num1, &num2);
    printf("O maior número é %d.\n", maior(num1, num2));
    return 0;
}
