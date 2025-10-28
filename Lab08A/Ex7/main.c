#include <stdio.h>
#include <stdbool.h>

bool isPrime(int z) {
    if (z <= 1) return false;
    if (z <= 3) return true;
    if (z % 2 == 0 || z % 3 == 0) return false;
    int i = 5;
    while (i * i <= z) {
        if (z % i == 0 || z % (i + 2) == 0) return false;
        i += 6;
    }
    return true;
}

int main() {
    int num;
    printf("Introduza um número: ");
    scanf("%d", &num);
    printf("O número %d %s primo.\n", num, isPrime(num) ? "é" : "não é");
    return 0;
}
