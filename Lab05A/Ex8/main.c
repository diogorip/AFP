#include <stdio.h>

int main() {
    int num, sum = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite um número entre 100 e 200: ");
        scanf("%d", &num);

        if (num >= 100 && num <= 200) {
            sum += num;
        } else {
            printf("Número fora do intervalo!\n");
        }
    }

    printf("A soma dos números no intervalo é: %d\n", sum);

    return 0;
}
