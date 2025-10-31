#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int genRandom(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int main() {
    srand(time(NULL));
    int num = genRandom(1, 10);
    printf("%d\n", num);
    return 0;
}
