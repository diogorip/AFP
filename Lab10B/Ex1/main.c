#include <stdio.h>
#include <string.h>
#include "carro.h"

#define MAX_CARROS 100

int main() {
    Carro carros[MAX_CARROS];
    int numeroCarrosAtual = 0;
    int opcao;

    printf("Quantos carros deseja adicionar? ");
    int numCarrosAdicionar;
    scanf("%d", &numCarrosAdicionar);

    for (int i = 0; i < numCarrosAdicionar && numeroCarrosAtual < MAX_CARROS; i++) {
        printf("Carro %d\n", i + 1);
        carroLerDados(&carros[numeroCarrosAtual]);
        numeroCarrosAtual++;
    }

    if (numeroCarrosAtual == 0) {
        printf("Nenhum carro registado.\n");
    } else {
        for (int i = 0; i < numeroCarrosAtual; i++) {
            printf("%d. ", i + 1);
            carroImprimir(&carros[i]);
        }
    }

    if (numeroCarrosAtual > 0) {
        char matriculaProcurar[20];
        printf("Introduza a matrícula a procurar: ");
        scanf("%s", matriculaProcurar);

        Carro *carroEncontrado = carroProcurar(matriculaProcurar, carros, numeroCarrosAtual);

        if (carroEncontrado != NULL) {
            printf("Carro encontrado:\n");
            carroImprimir(carroEncontrado);
        } else {
            printf("Carro com matrícula '%s' não encontrado.\n", matriculaProcurar);
        }

        // Testar com uma matrícula que não existe
        printf("\nTentando procurar matrícula inexistente 'XX-00-XX':\n");
        Carro *carroInexistente = carroProcurar("XX-00-XX", carros, numeroCarrosAtual);
        if (carroInexistente == NULL) {
            printf("Corretamente retornou NULL para matrícula inexistente.\n");
        }
    } else {
        printf("Nenhum carro disponível para procurar.\n");
    }

    printf("\n*** TESTE 4: Estatísticas dos preços ***\n");
    if (numeroCarrosAtual > 0) {
        double precoMin, precoMax, precoMedio;

        carroEstatisticas(carros, numeroCarrosAtual, &precoMin, &precoMax, &precoMedio);

        printf("\tESTATÍSTICAS (%d carros)\n", numeroCarrosAtual);
        printf("\tPreço Mínimo:  %.2f€\n", precoMin);
        printf("\tPreço Máximo:  %.2f€\n", precoMax);
        printf("\tPreço Médio:   %.2f€\n", precoMedio);

        // Mostrar qual carro tem o preço mínimo e máximo
        printf("\nCarros com preços extremos:\n");
        for (int i = 0; i < numeroCarrosAtual; i++) {
            if (carros[i].preco == precoMin) {
                printf("\tMais barato:\t");
                carroImprimir(&carros[i]);
            }
            if (carros[i].preco == precoMax) {
                printf("\tMais caro:\t");
                carroImprimir(&carros[i]);
            }
        }
    } else {
        printf("Nenhum carro disponível para calcular estatísticas.\n");
    }

    do {
        printf("MENU:\n");
        printf("1. Adicionar novo carro\n");
        printf("2. Listar todos os carros\n");
        printf("3. Procurar carro\n");
        printf("4. Ver estatísticas\n");
        printf("0. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (numeroCarrosAtual < MAX_CARROS) {
                    carroLerDados(&carros[numeroCarrosAtual]);
                    numeroCarrosAtual++;
                } else {
                    printf("Limite de carros atingido!\n");
                }
                break;

            case 2:
                printf("\nLista de Carros\n");
                if (numeroCarrosAtual == 0) {
                    printf("Nenhum carro registado.\n");
                } else {
                    for (int i = 0; i < numeroCarrosAtual; i++) {
                        printf("%d. ", i + 1);
                        carroImprimir(&carros[i]);
                    }
                }
                break;

            case 3: {
                char mat[20];
                printf("Matrícula: ");
                scanf("%s", mat);
                Carro *c = carroProcurar(mat, carros, numeroCarrosAtual);
                if (c != NULL) {
                    printf("Carro encontrado: ");
                    carroImprimir(c);
                } else {
                    printf("Carro não encontrado.\n");
                }
                break;
            }

            case 4:
                if (numeroCarrosAtual > 0) {
                    double pMin, pMax, pMed;
                    carroEstatisticas(carros, numeroCarrosAtual, &pMin, &pMax, &pMed);
                    printf("Preço Mínimo: %.2f€\n", pMin);
                    printf("Preço Máximo: %.2f€\n", pMax);
                    printf("Preço Médio:  %.2f€\n", pMed);
                } else {
                    printf("Nenhum carro disponível.\n");
                }
                break;

            case 0:
                break;

            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 0);

    printf("\nTotal de carros: %d\n", numeroCarrosAtual);

    return 0;
}
