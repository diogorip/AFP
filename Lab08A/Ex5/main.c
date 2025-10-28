#include <stdio.h>

int parteInteira(double x) {
    return (int)x;
}

int main() {
    double num;
    printf("Introduza um número: ");
    scanf("%lf", &num);
    printf("A parte inteira é %d.\n", parteInteira(num));
    return 0;
}
