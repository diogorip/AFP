#include <stdio.h>
#include <string.h>
#include "cliente.h"

Cliente criarCliente(int numero, char nome[], char morada[], char email[], char tlm[], char nif[], Tratamento tratamento, bool seguro, int dia, int mes, int ano) {
    Cliente cliente;
    cliente.numero = numero;
    strcpy(cliente.nome, nome);
    strcpy(cliente.morada, morada);
    strcpy(cliente.email, email);
    strcpy(cliente.tlm, tlm);
    strcpy(cliente.nif, nif);
    cliente.tratamento = tratamento;
    cliente.seguro = seguro;
    cliente.dataNascimento = dateCreate(dia, mes, ano);
    return cliente;
}

void imprimirCliente(Cliente c) {
    printf("Cliente %d: %s\n", c.numero, c.nome);
    printf("Morada: %s\n", c.morada);
    printf("Email: %s\n", c.email);
    printf("Telemovel: %s\n", c.tlm);
    printf("NIF: %s\n", c.nif);
    printf("Data de Nascimento: ");
    datePrint(c.dataNascimento);
    printf("Tratamento: ");
    switch(c.tratamento) {
        case FISIOTERAPIA:
            printf("Fisioterapia\n");
            break;
        case MESOTERAPIA:
            printf("Mesoterapia\n");
            break;
        case OSTEOPATIA:
            printf("Osteopatia\n");
            break;
        case PILATES_MEDICINAL:
            printf("Pilates medicinal\n");
            break;
    }
    printf("Seguro: %s\n", c.seguro ? "Sim" : "Nao");
}