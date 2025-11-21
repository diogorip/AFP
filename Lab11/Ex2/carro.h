#ifndef CARRO_H
#define CARRO_H

#define CARRO_LISTA_MAX 1000

typedef struct {
    int id;
    char matricula[20];
    char marca[50];
    int ano;
    double preco;
} Carro;

typedef struct carroLista {
    Carro elementos[CARRO_LISTA_MAX];
    int tamanhoAtual;
} CarroLista;

void carroLerDados(Carro *carro);
void carroImprimir(Carro *carro);
Carro* carroProcurar(char *matricula, Carro *carrosVetor, int numeroCarrosAtual);
void carroEstatisticas(Carro *carrosVetor, int numeroCarrosAtual,
                       double *precoMin, double *precoMax, double *precoMedio);

CarroLista carroListaCriar();
void carroListaImprimir(CarroLista *lista);
Carro* carroListaProcurar(char *matricula, CarroLista *lista);

int carroProcurarPorMatricula(char *matricula, CarroLista *lista);
int carroProcurarPorAno(int ano, CarroLista *lista);
int carroProcurarPorIdEmArrayOrdenado(int id, CarroLista *lista);

void carroOrdenarPorMatricula(CarroLista *lista);
void carroOrdenarPorAno(CarroLista *lista);
void carroOrdenarPorId(CarroLista *lista);

#endif
