#ifndef CARRO_H
#define CARRO_H

typedef struct {
    char matricula[15];
    char marca[50];
    int ano;
    int preco;
} Carro;


void carroLerDados(Carro *carro);
void carroImprimir(Carro *carro);
Carro* carroProcurar(char *matricula, Carro *carrosVetor, int numeroCarrosAtual);
void carroEstatisticas(Carro *carrosVetor, int numeroCarrosAtual, int *precoMin, int *precoMax, double *precoMedio);

#endif
