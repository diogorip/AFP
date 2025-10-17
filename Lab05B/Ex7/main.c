#include <stdio.h>

int main() {
    char option;

    do {
        printf("++++ MENU DE PRODUTOS ++++\n");
        printf("N - Novo produto\n");
        printf("V - Visualizar produto\n");
        printf("A - Alterar produto\n");
        printf("E - Eliminar produto\n");
        printf("S – Sair\n");
        printf("Digite a opção: ");
        scanf(" %c", &option);

        switch (option) {
            case 'N':
            case 'n':
                printf("Opção escolhida: 'N. Novo produto'\n");
                break;
            case 'V':
            case 'v':
                printf("Opção escolhida: 'V. Visualizar produto'\n");
                break;
            case 'A':
            case 'a':
                printf("Opção escolhida: 'A. Alterar produto'\n");
                break;
            case 'E':
            case 'e':
                printf("Opção escolhida: 'E. Eliminar produto'\n");
                break;
            case 'S':
            case 's':
                printf("Pretende mesmo sair (S/N)? ");
                scanf(" %c", &option);
                if (option == 'S' || option == 's') {
                    return 0;
                }
                break;
            default:
                printf("ERRO: A opção escolhida é inválida!\n");
                break;
        }
    } while (option != 'S' && option != 's');

    return 0;
}
