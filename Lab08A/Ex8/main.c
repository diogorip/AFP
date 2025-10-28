#include <stdio.h>

float calcularMedia(float vetor[], int tamanho) {
    if (tamanho <= 0) {
        return 0.0;
    }

    float soma = 0.0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }

    return soma / tamanho;
}

int main() {
    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Tamanho inválido!\n");
        return 1;
    }

    float vetor[n];


    for (int i = 0; i < n; i++) {
        printf("Digite o digito %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }


    float media = calcularMedia(vetor, n);
    printf("A media dos elementos do vetor e: %.2f\n", media);

    return 0;
}
