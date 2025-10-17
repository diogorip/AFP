#include <stdio.h>

int main() {
    int numeros[] = { 12, 4, 32, 99, 1, 7, 3, 9, 22, 10 };
    int i;

    for (i = 0; i < 10; i++) {
        printf("%d é %s\n", numeros[i], numeros[i] % 2 == 0 ? "par" : "ímpar");
    }

    return 0;
}
