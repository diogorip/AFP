#include <stdio.h>

int main() {
    int avistamentos[12] = {5, 21, 12, 16, 20, 34, 110, 150, 100, 98, 70, 6};
    int max = avistamentos[0], min = avistamentos[0];
    int maxIndex = 0, minIndex = 0;

    for (int i = 1; i < 12; i++) {
        if (avistamentos[i] > max) {
            max = avistamentos[i];
            maxIndex = i;
        }
        if (avistamentos[i] < min) {
            min = avistamentos[i];
            minIndex = i;
        }
    }

    printf("\t===============================================\n");
    printf("\tO mês %d foi o mês com mais avistamentos: %d\n", maxIndex + 1, max);
    printf("\tO mês %d foi o mês com menos avistamentos: %d\n", minIndex + 1, min);
    printf("\t===============================================\n");

    return 0;
}
