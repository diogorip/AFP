#include <stdio.h>
#include <stdlib.h>
#include "clinica.h"
#include "cliente.h"

#define MAX_CLINICAS 10

int main() {
    Clinica clinicas[MAX_CLINICAS];
    
    clinicas[0] = criarClinica(1, "Clinica Saude Total", "Rua da Saude, 123");
    clinicas[1] = criarClinica(2, "Clinica Bem Estar", "Avenida Central, 456");
    
    Cliente c1 = criarCliente(1, "Joao Silva", "Rua A, 10", "joao@email.com", "912345678", "123456789", FISIOTERAPIA, true, 15, 3, 1985);
    Cliente c2 = criarCliente(2, "Maria Santos", "Rua B, 20", "maria@email.com", "923456789", "987654321", OSTEOPATIA, false, 22, 7, 1990);
    Cliente c3 = criarCliente(3, "Pedro Costa", "Rua C, 30", "pedro@email.com", "934567890", "456789123", PILATES_MEDICINAL, true, 10, 12, 1978);
    
    clinicas[0].clientes.clientes[0] = c1;
    clinicas[0].clientes.clientes[1] = c2;
    clinicas[0].clientes.clientes[2] = c3;
    clinicas[0].clientes.numeroAtualClientes = 3;
    
    imprimirClientesClinica(clinicas[0]);

    return EXIT_SUCCESS;
}