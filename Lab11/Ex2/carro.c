#include <stdio.h>
#include <string.h>
#include "carro.h"

void carroLerDados(Carro *carro) {
    static int nextId = 1;
    carro->id = nextId++;

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

    printf("ID: %d | Matrícula: %s | Marca: %s | Ano: %d | Preço: %.2f€\n",
           carro->id, carro->matricula, carro->marca, carro->ano, carro->preco);
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

int carroProcurarPorMatricula(char *matricula, CarroLista *lista) {
    for (int i = 0; i < lista->tamanhoAtual; i++) {
        if (strcmp(lista->elementos[i].matricula, matricula) == 0) {
            return i;
        }
    }
    return -1;
}

int carroProcurarPorAno(int ano, CarroLista *lista) {
    for (int i = 0; i < lista->tamanhoAtual; i++) {
        if (lista->elementos[i].ano == ano) {
            return i;
        }
    }
    return -1;
}

void carroOrdenarPorMatricula(CarroLista *lista) {
    for (int i = 0; i < lista->tamanhoAtual - 1; i++) {
        for (int j = 0; j < lista->tamanhoAtual - i - 1; j++) {
            if (strcmp(lista->elementos[j].matricula, lista->elementos[j + 1].matricula) > 0) {
                Carro temp = lista->elementos[j];
                lista->elementos[j] = lista->elementos[j + 1];
                lista->elementos[j + 1] = temp;
            }
        }
    }
}

void carroOrdenarPorAno(CarroLista *lista) {
    for (int i = 0; i < lista->tamanhoAtual - 1; i++) {
        for (int j = 0; j < lista->tamanhoAtual - i - 1; j++) {
            if (lista->elementos[j].ano < lista->elementos[j + 1].ano ||
                (lista->elementos[j].ano == lista->elementos[j + 1].ano &&
                 strcmp(lista->elementos[j].matricula, lista->elementos[j + 1].matricula) > 0)) {
                Carro temp = lista->elementos[j];
                lista->elementos[j] = lista->elementos[j + 1];
                lista->elementos[j + 1] = temp;
            }
        }
    }
}

void carroOrdenarPorId(CarroLista *lista) {
    for (int i = 0; i < lista->tamanhoAtual - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < lista->tamanhoAtual; j++) {
            if (lista->elementos[j].id < lista->elementos[minIndex].id) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            Carro temp = lista->elementos[i];
            lista->elementos[i] = lista->elementos[minIndex];
            lista->elementos[minIndex] = temp;
        }
    }
}

int carroProcurarPorIdEmArrayOrdenado(int id, CarroLista *lista) {
    int left = 0;
    int right = lista->tamanhoAtual - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (lista->elementos[mid].id == id) {
            return mid;
        }

        if (lista->elementos[mid].id < id) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}
