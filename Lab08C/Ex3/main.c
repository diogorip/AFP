#include <stdio.h>
#include <stdlib.h>

int mostar(int pesquisa, int vetor[], int tamanho) {
  if (tamanho <= 0) {
    printf("Numero invalido");
    return 0;
  }

  for (int i = 0; i < tamanho; i++) {
    if (vetor[i] == pesquisa) {
      printf("O valor existe no array\n");
    } else {
      printf("o numero nao existe no array\n");
      return -1;
    }
  }
}

int main() {

  int n;
  int pesquisa;
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
  printf("Qual o numero que quer pesquisar: ");
  scanf("%d", &pesquisa);

  mostar(pesquisa, vetor, n);
  return 0;
}
