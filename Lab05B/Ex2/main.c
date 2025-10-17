#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Digite o número de números reais a serem lidos: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        double num;
        printf("Digite o número real %d: ", i + 1);
        scanf("%lf", &num);
        sum += num;
    }

    double average = sum / n;
    printf("A média é %.1lf\n", average);

    return 0;
}
