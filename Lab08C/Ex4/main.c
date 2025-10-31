#include <stdio.h>
#include <stdlib.h>

void mostar(int vetor[], int tamanho) {
  if (tamanho <= 0) {
    printf("Numero invalido");
  }

  for (int i = 0; i < tamanho; i++) {
    if (vetor[i] % 2 == 0) {
      printf("os numeros pares inseridos foram:  %d\n", vetor[i]);
    }
  }
  printf("\n");
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

  mostar(vetor, n);
  return 0;
}
