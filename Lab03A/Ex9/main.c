#include <stdio.h>

int main() {
    int dia, mes, ano;
    printf("Introduza uma data (aaa/mm/dd): ");
    scanf("%d/%d/%d", &ano, &mes, &dia);
    printf("Data lida: %04d/%02d/%02d\n", ano, mes, dia);
    return 0;
}
