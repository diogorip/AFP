#include <stdio.h>

int main() {
    int num, x1;
    float x2;
    int codigoLocalidade, codigoRua;

    printf("Introduza um número inteiro: ");
    scanf("%d", &num);

    printf("Introduza outro número inteiro: ");
    scanf("%d", &x1);

    printf("Introduza um número real: ");
    scanf("%f", &x2);

    printf("Introduza o seu código postal (XXXX-XXX): ");
    scanf("%d-%d", &codigoLocalidade, &codigoRua);

    printf("Número inteiro: %d\n", num);
    printf("Outro número inteiro: %d\n", x1);
    printf("Número real: %.2f\n", x2);
    printf("Código postal: %04d-%03d\n", codigoLocalidade, codigoRua);

    return 0;
}
