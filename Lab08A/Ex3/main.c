#include <stdio.h>

int absoluteValue(int num) {
    return num >= 0 ? num : -num;
}

int main() {
    int num;
    printf("Introduza um número: ");
    scanf("%d", &num);
    printf("O valor absoluto de %d é %d.\n", num, absoluteValue(num));
    return 0;
}
