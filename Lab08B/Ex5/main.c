#include <stdio.h>

int somarParesDoIntervalo(int inicio, int fim) {
    int soma = 0;
    for (int i = inicio; i <= fim; i++) {
        if (i % 2 == 0) {
            soma += i;
        }
    }
    return soma;
}

int main() {
    int inicio, fim;
    printf("Digite o intervalo (inicio fim): ");
    scanf("%d %d", &inicio, &fim);
    printf("Soma dos pares: %d\n", somarParesDoIntervalo(inicio, fim));
    return 0;
}
