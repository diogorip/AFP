#include <stdio.h>
#include <string.h>
#include "carro.h"

int main() {
    CarroLista lista = carroListaCriar();

    printf("Quantos carros deseja adicionar? ");
    int numCarros;
    scanf("%d", &numCarros);

    for (int i = 0; i < numCarros && lista.tamanhoAtual < CARRO_LISTA_MAX; i++) {
        carroLerDados(&lista.elementos[lista.tamanhoAtual]);
        lista.tamanhoAtual++;
    }

    printf("\nLista de carros:\n");
    carroListaImprimir(&lista);

    if (lista.tamanhoAtual > 0) {
        char matricula[20];
        printf("\nMatrícula a procurar: ");
        scanf("%s", matricula);

        Carro *encontrado = carroListaProcurar(matricula, &lista);
        if (encontrado != NULL) {
            printf("Carro encontrado: ");
            carroImprimir(encontrado);
        } else {
            printf("Carro não encontrado.\n");
        }
    }

    if (lista.tamanhoAtual > 0) {
        double precoMin, precoMax, precoMedio;
        carroEstatisticas(lista.elementos, lista.tamanhoAtual, &precoMin, &precoMax, &precoMedio);

        printf("\nEstatísticas:\n");
        printf("Preço Mínimo: %.2f€\n", precoMin);
        printf("Preço Máximo: %.2f€\n", precoMax);
        printf("Preço Médio: %.2f€\n", precoMedio);
    }

    return 0;
}
