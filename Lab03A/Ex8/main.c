#include <stdio.h>
#define PI 3.14159265358979323846

int main() {
    double raio;
    printf("Insira o valor do raio: ");
    scanf("%lf", &raio);
    printf("Perímetro: %.2lf\nÁrea: %.2lf\n", 2 * PI * raio, PI * raio * raio);
    return 0;
};
