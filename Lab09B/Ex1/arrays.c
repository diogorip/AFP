#include <stdio.h>
#include <math.h>
#include "arrays.h"

void arrayPrint(int array[], int arrayLength) {
    printf("[");
    for (int i = 0; i < arrayLength; i++) {
        printf("%d", array[i]);
        if (i < arrayLength - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

ArrayStats arrayStatistics(int array[], int arrayLength) {
    ArrayStats stats;
    
    stats.sum = 0;
    stats.minimum = array[0];
    stats.maximum = array[0];
    
    for (int i = 0; i < arrayLength; i++) {
        stats.sum += array[i];
        if (array[i] < stats.minimum) {
            stats.minimum = array[i];
        }
        if (array[i] > stats.maximum) {
            stats.maximum = array[i];
        }
    }
    
    stats.mean = (double)stats.sum / arrayLength;
    
    double sumSquaredDiff = 0.0;
    for (int i = 0; i < arrayLength; i++) {
        double diff = array[i] - stats.mean;
        sumSquaredDiff += diff * diff;
    }
    stats.variance = sumSquaredDiff / arrayLength;
    
    return stats;
}

void arrayStatsPrint(ArrayStats statistics) {
    printf("Sum: %d\n", statistics.sum);
    printf("Mean: %.2f\n", statistics.mean);
    printf("Minimum: %d\n", statistics.minimum);
    printf("Maximum: %d\n", statistics.maximum);
    printf("Variance: %.2f\n", statistics.variance);
}