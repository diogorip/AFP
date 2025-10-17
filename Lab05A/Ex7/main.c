#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Introduza 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);
        if (n % 3 == 0) {
            printf("O número %d é um múltiplo de 3!\n", n);
            count++;
        }
    }
    printf("Foram introduzidos %d múltiplos de 3.\n", count);
}
