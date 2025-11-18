#include "carro.h"
#include <stdio.h>
#include <string.h>


void carroLerDados(Carro *carro)
{
    printf("Matricula: ");
    scanf("%s", carro->matricula);
    printf("Marca: ");
    scanf(" %[^\n]", carro->marca); 
    printf("Ano: ");
    scanf("%d", &carro->ano);
    printf("Preco: ");
    scanf("%d", &carro->preco);
}

void carroImprimir(Carro *carro) {
    printf("Matricula: %s\n", carro->matricula);
    printf("Marca: %s\n", carro->marca);
    printf("Ano: %d\n", carro->ano);
    printf("Preco: %d\n", carro->preco);
}

Carro* carroProcurar(char *matricula, Carro *carrosVetor, int numeroCarrosAtual) {
    for(int i = 0; i < numeroCarrosAtual; i++) {
        if(strcmp(carrosVetor[i].matricula, matricula) == 0) {
            return &carrosVetor[i];
        }
    }
    return NULL;
}

void carroEstatisticas(Carro *carrosVetor, int numeroCarrosAtual, int *precoMin, int *precoMax, double *precoMedio) {
    if(numeroCarrosAtual == 0) {
        *precoMin = 0;
        *precoMax = 0;
        *precoMedio = 0.0;
        return;
    }

    
    *precoMin = carrosVetor[0].preco;
    *precoMax = carrosVetor[0].preco;
    int soma = 0;

    for(int i = 0; i < numeroCarrosAtual; i++) {
        if(carrosVetor[i].preco < *precoMin)
            *precoMin = carrosVetor[i].preco;
        if(carrosVetor[i].preco > *precoMax)
            *precoMax = carrosVetor[i].preco;
        soma += carrosVetor[i].preco;
    }

    *precoMedio = (double)soma / numeroCarrosAtual;
}