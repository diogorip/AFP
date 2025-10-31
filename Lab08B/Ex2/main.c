#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int sumDigits(int a) {
    int count = 0;
    while (a > 0) {
        count += a % 10;
        a /= 10;
    }
    return count;
}

int main() {
    int num = 12345;
    int result = sumDigits(num);
    printf("Soma dos digitos de %d é %d\n", num, result);
    return 0;
}
