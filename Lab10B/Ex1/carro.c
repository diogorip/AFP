#include <stdio.h>
#include <string.h>
#include "carro.h"

void carroLerDados(Carro *carro) {
    printf("Matrícula: ");
    scanf("%s", carro->matricula);

    printf("Marca: ");
    scanf("%s", carro->marca);

    printf("Ano: ");
    scanf("%d", &carro->ano);

    printf("Preço: ");
    scanf("%lf", &carro->preco);

    printf("Carro adicionado com sucesso!\n");
}

void carroImprimir(Carro *carro) {
    if (carro == NULL) {
        printf("Carro inválido (NULL)\n");
        return;
    }

    printf("Matrícula: %s | Marca: %s | Ano: %d | Preço: %.2f€\n",
           carro->matricula, carro->marca, carro->ano, carro->preco);
}

Carro* carroProcurar(char *matricula, Carro *carrosVetor, int numeroCarrosAtual) {
    for (int i = 0; i < numeroCarrosAtual; i++) {
        if (strcmp(carrosVetor[i].matricula, matricula) == 0) {
            return &carrosVetor[i];
        }
    }
    return NULL;
}

void carroEstatisticas(Carro *carrosVetor, int numeroCarrosAtual,
                       double *precoMin, double *precoMax, double *precoMedio) {
    if (numeroCarrosAtual == 0) {
        *precoMin = 0;
        *precoMax = 0;
        *precoMedio = 0;
        return;
    }

    *precoMin = carrosVetor[0].preco;
    *precoMax = carrosVetor[0].preco;
    double soma = carrosVetor[0].preco;

    for (int i = 1; i < numeroCarrosAtual; i++) {
        double preco = carrosVetor[i].preco;

        if (preco < *precoMin) {
            *precoMin = preco;
        }

        if (preco > *precoMax) {
            *precoMax = preco;
        }

        soma += preco;
    }

    *precoMedio = soma / numeroCarrosAtual;
}

CarroLista carroListaCriar() {
    CarroLista lista;
    lista.tamanhoAtual = 0;
    return lista;
}

void carroListaImprimir(CarroLista *lista) {
    for (int i = 0; i < lista->tamanhoAtual; i++) {
        carroImprimir(&lista->elementos[i]);
    }
}

Carro* carroListaProcurar(char *matricula, CarroLista *lista) {
    return carroProcurar(matricula, lista->elementos, lista->tamanhoAtual);
}
