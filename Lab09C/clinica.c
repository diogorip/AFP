#include <stdio.h>
#include <string.h>
#include "clinica.h"

Clinica criarClinica(int numero, char nome[], char morada[]) {
    Clinica clinica;
    clinica.numero = numero;
    strcpy(clinica.nome, nome);
    strcpy(clinica.morada, morada);
    clinica.clientes.numeroAtualClientes = 0;
    return clinica;
}

void imprimirClinica(Clinica clinica) {
    printf("Clinica %d: %s\n", clinica.numero, clinica.nome);
    printf("Morada: %s\n", clinica.morada);
    printf("Numero de clientes: %d\n", clinica.clientes.numeroAtualClientes);
}

void imprimirClientesClinica(Clinica clinica) {
    printf("Clientes da clinica %s:\n", clinica.nome);
    for (int i = 0; i < clinica.clientes.numeroAtualClientes; i++) {
        imprimirCliente(clinica.clientes.clientes[i]);
    }
}