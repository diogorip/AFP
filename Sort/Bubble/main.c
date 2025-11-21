#include <stdio.h>

void bubbleSort(int arr[], int arrSize) {
    int i, j, temp;

    for (i = 0; i < arrSize - 1; i++) {
        for (j = 0; j < arrSize - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5, 8, 2, 7, 1, 3};

    bubbleSort(arr, sizeof(arr) / sizeof(arr[0]));

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
