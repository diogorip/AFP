#include <stdio.h>
#include <stdlib.h>
#include "arrays.h"

int main() {

    int array[] = {5, 2, 8, 1, 9, 3, 7, 4, 6};
    int arrayLength = 9;

    printf("Array: ");
    arrayPrint(array, arrayLength);

    printf("\nStatistics:\n");
    ArrayStats stats = arrayStatistics(array, arrayLength);
    arrayStatsPrint(stats);

    return EXIT_SUCCESS;
}
