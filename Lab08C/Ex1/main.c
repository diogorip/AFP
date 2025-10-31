#include <stdio.h>

float calcularAreaCircunferencia(float raio) {
    return 3.14159265358979323846 * raio * raio;
}

float calcularPerimetroCircunferencia(float raio) {
    return 2 * 3.14159265358979323846 * raio;
}

float calcularVolumeEsfera(float raio) {
    return (4.0 / 3.0) * 3.14159265358979323846 * raio * raio * raio;
}

void menu() {
    printf("************************ MENU ************************\n");
    printf("1 – Cálculo da área de uma circunferência\n");
    printf("2 – Cálculo do perímetro de uma circunferência\n");
    printf("3 – Cálculo do volume de uma esfera\n");
    printf("0 – Sair\n");
    printf("******************************************************\n");
}

int main() {
    int opcao;
    float raio;

    do {
        menu();
        printf("Escolha uma opção: ");
        scanf(" %d", &opcao);

        switch(opcao) {
            case 1:
                printf("Digite o raio da circunferência: ");
                scanf("%f", &raio);
                printf("Área da circunferência: %.2f\n", calcularAreaCircunferencia(raio));
                break;
            case 2:
                printf("Digite o raio da circunferência: ");
                scanf("%f", &raio);
                printf("Perímetro da circunferência: %.2f\n", calcularPerimetroCircunferencia(raio));
                break;
            case 3:
                printf("Digite o raio da esfera: ");
                scanf("%f", &raio);
                printf("Volume da esfera: %.2f\n", calcularVolumeEsfera(raio));
                break;
            case 0:
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}
