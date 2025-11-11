#ifndef CLIENTE_H
#define CLIENTE_H

#include <stdbool.h>
#include "date.h"
#include "tratamento.h"

typedef struct {
    int numero;
    char nome[81];
    char morada[101];
    char email[81];
    char tlm[21];
    char nif[10];
    Date dataNascimento;
    Tratamento tratamento;
    bool seguro;
} Cliente;

Cliente criarCliente(int numero, char nome[], char morada[], char email[], char tlm[], char nif[], Tratamento tratamento, bool seguro, int dia, int mes, int ano);
void imprimirCliente(Cliente c);

#endif
