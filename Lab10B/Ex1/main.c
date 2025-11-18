#include <stdio.h>
#include "carro.h"

int main() {
    int numeroCarros = 0;
    int capacidade = 5; 
    Carro carrosVetor[capacidade];

    
    printf("Quantos carros deseja cadastrar? ");
    scanf("%d", &numeroCarros);
    for(int i = 0; i < numeroCarros; i++) {
        printf("\nCarro %d:\n", i+1);
        carroLerDados(&carrosVetor[i]);
    }

    
    printf("\nLista de Carros:\n");
    for(int i = 0; i < numeroCarros; i++) {
        carroImprimir(&carrosVetor[i]);
        printf("--------------------\n");
    }

    
    char matriculaBusca[15];
    printf("Digite a matricula do carro a procurar: ");
    scanf("%s", matriculaBusca);

    Carro *carroEncontrado = carroProcurar(matriculaBusca, carrosVetor, numeroCarros);
    if(carroEncontrado != NULL) {
        printf("\nCarro encontrado:\n");
        carroImprimir(carroEncontrado);
    } else {
        printf("Carro com matricula %s nao encontrado.\n", matriculaBusca);
    }

   
    int precoMin, precoMax;
    double precoMedio;
    carroEstatisticas(carrosVetor, numeroCarros, &precoMin, &precoMax, &precoMedio);

    printf("\nEstatisticas de Precos:\n");
    printf("Preco Minimo: %d\n", precoMin);
    printf("Preco Maximo: %d\n", precoMax);
    printf("Preco Medio: %.2lf\n", precoMedio);

    return 0;
}
