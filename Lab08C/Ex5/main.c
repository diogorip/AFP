#include <stdio.h>
#include <stdlib.h>

void calcular(int vetor[], int tamanho) {
  int soma = 0, max = 0, min;
  float media;
  if (tamanho <= 0) {
    printf("Numero invalido");
  }

  for (int i = 0; i < tamanho; i++) {
    soma = soma + vetor[i];

    if (vetor[i] > max) {
      max = vetor[i];
    }
    if (vetor[i] < min) {
      min = vetor[i];
    }
  }

  media = (float)soma / tamanho;
  printf("Soma: %d\n", soma);
  printf("Media: %.2f\n", media);
  printf("Valor maximo: %d\n", max);
  printf("Valor minimo: %d\n", min);
}

int main() {
  int n;

  printf("Insira quantos numeros quer inserir: ");
  scanf("%d", &n);

  if (n <= 0) {
    printf("Numero invalido");
    return 1;
  }

  int vetor[n];

  for (int i = 0; i < n; i++) {
    printf("Insira o numero %d :", i + 1);
    scanf(" %d", &vetor[i]);
  }

  calcular(vetor, n);
  return 0;
}
