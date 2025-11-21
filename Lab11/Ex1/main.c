#include <stdio.h>
#include <stdlib.h>
#include "input.h"

void arrayPrint(int *array, int arrayLength) {
    printf("[");
    for (int i = 0; i < arrayLength; i++) {
        printf("%d", array[i]);
        if (i < arrayLength - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

void arraySortAscending(int *array, int arrayLength) {
    for (int i = 0; i < arrayLength - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < arrayLength; j++) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = array[i];
            array[i] = array[minIndex];
            array[minIndex] = temp;
        }
    }
}

void arraySortDecreasing(int *array, int arrayLength) {
    for (int i = 0; i < arrayLength - 1; i++) {
        for (int j = 0; j < arrayLength - i - 1; j++) {
            if (array[j] < array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {
    int array[10];

    printf("Introduza 10 elementos:\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("\nArray inicial: ");
    arrayPrint(array, 10);

    arraySortAscending(array, 10);
    printf("Array ordenado crescente: ");
    arrayPrint(array, 10);

    arraySortDecreasing(array, 10);
    printf("Array ordenado decrescente: ");
    arrayPrint(array, 10);

    return EXIT_SUCCESS;
}
