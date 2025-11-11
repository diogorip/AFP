#ifndef CLINICA_H
#define CLINICA_H

#include "tratamento.h"
#include "cliente.h"

#define MAX_CLIENTES 1000

typedef struct {
    Cliente clientes[MAX_CLIENTES];
    int numeroAtualClientes;
} Clientes;

typedef struct {
    int numero;
    char nome[81];
    char morada[101];
    Clientes clientes;
} Clinica;

Clinica criarClinica(int numero, char nome[], char morada[]);
void imprimirClinica(Clinica clinica);
void imprimirClientesClinica(Clinica clinica);

#endif
