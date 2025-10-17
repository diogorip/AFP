#include <stdio.h>

int main() {
    char caracter1, caracter2;

    printf("Introduza um caracter: ");
    scanf("%c", &caracter1);

    printf("Introduza outro caracter: ");
    scanf(" %c", &caracter2);

    printf("*** ANTES DA TROCA ***\n");
    printf("Valor da variável \"caracter1\" = %c\n", caracter1);
    printf("Valor da variável \"caracter2\" = %c\n", caracter2);

    char temp = caracter1;
    caracter1 = caracter2;
    caracter2 = temp;

    printf("*** DEPOIS DA TROCA ***\n");
    printf("Valor final da variável \"caracter1\" = %c\n", caracter1);
    printf("Valor final da variável \"caracter2\" = %c\n", caracter2);

    return 0;
}
