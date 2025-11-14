#include <stdio.h>
#include <stdlib.h>
#include "input.h"

void arrayStats(int *array, int arrayLength, int *sum, double *mean) {
    *sum = 0;
    
    for (int i = 0; i < arrayLength; i++) {
        *sum += *(array + i);
    }
    
    *mean = (double)(*sum) / arrayLength;
}

int main() {
    int arrayLength;
    
    printf("=== Estatísticas de Arrays ===\n\n");
    
    printf("Quantos elementos tem o array? ");
    while (!readInteger(&arrayLength) || arrayLength <= 0) {
        printf("Por favor, insira um número válido maior que 0: ");
    }
    
    int *array = (int *)malloc(arrayLength * sizeof(int));
    if (array == NULL) {
        printf("Erro ao alocar memória!\n");
        return EXIT_FAILURE;
    }
    
    printf("\nInsira os %d elementos do array:\n", arrayLength);
    for (int i = 0; i < arrayLength; i++) {
        printf("Elemento %d: ", i + 1);
        while (!readInteger(&array[i])) {
            printf("Valor inválido! Elemento %d: ", i + 1);
        }
    }
    
    int sum;
    double mean;
    
    arrayStats(array, arrayLength, &sum, &mean);
    
    printf("\n=== Resultados ===\n");
    printf("Array: [");
    for (int i = 0; i < arrayLength; i++) {
        printf("%d", array[i]);
        if (i < arrayLength - 1) {
            printf(", ");
        }
    }
    printf("]\n");
    printf("Soma dos elementos: %d\n", sum);
    printf("Média dos elementos: %.2f\n", mean);
    
    free(array);
    
    return EXIT_SUCCESS;
}