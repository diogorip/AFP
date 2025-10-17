#include <stdio.h>

int main() {
    int num, even = 0, odd = 0;

    printf("Digite 10 números inteiros:\n");

    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);

        if (num % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("Foram introduzidos %d números pares e %d números ímpares.\n", even, odd);

    return 0;
}
