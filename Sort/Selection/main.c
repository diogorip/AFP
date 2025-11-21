#include <stdio.h>

void selectionSort(int arr[], int arrSize) {
    int i, j, indexMin, temp;

    for (i = 0; i < arrSize - 1; i++) {
        indexMin = i;
        for (j = i; j < arrSize; j++) {
            if (arr[j] < arr[indexMin]) {
                indexMin = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[indexMin];
        arr[indexMin] = temp;
    }
}

int main() {
    int arr[5] = {64, 25, 12, 22, 11};

    selectionSort(arr, sizeof(arr) / sizeof(arr[0]));

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
