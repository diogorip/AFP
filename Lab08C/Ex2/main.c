#include <stdio.h>
#include <stdlib.h>

void arrayPrint(int vetor[], int tamanho) {
  if (tamanho <= 0) {
    printf("Numero invalido");
  }

  for (int i = 0; i < tamanho; i++) {
    printf("os numeros inseridos foram:  %d\n", vetor[i]);
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

  arrayPrint(vetor, n);
  return 0;
}
