#include <stdio.h>

int countDigits(int y) {
    int count = 0;
    if (y == 0) return 1;
    if (y < 0) y = -y;
    while (y > 0) {
        y /= 10;
        count++;
    }
    return count;
}

int main() {
    int num;
    printf("Introduza um número: ");
    scanf("%d", &num);
    printf("O número tem %d dígitos.\n", countDigits(num));
    return 0;
}
