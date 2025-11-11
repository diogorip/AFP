#ifndef ARRAYS_H
#define ARRAYS_H

typedef struct {
    int sum;
    double mean;
    int minimum;
    int maximum;
    double variance;
} ArrayStats;

void arrayPrint(int array[], int arrayLength);
ArrayStats arrayStatistics(int array[], int arrayLength);
void arrayStatsPrint(ArrayStats statistics);

#endif