#include <stdio.h>

int maiorDosTres(int a, int b, int c) {
    int maior = a;
    if (b > maior) maior = b;
    if (c > maior) maior = c;
    return maior;
}

int main() {
    int a, b, c;
    printf("Digite três números: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Maior: %d\n", maiorDosTres(a, b, c));
    return 0;
}
