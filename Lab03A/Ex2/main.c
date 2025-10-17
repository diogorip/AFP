#include <stdio.h>

int main() {
    char c = 'r';
    short j = 127;
    int k = 32767;
    double v = 12.45;
    float x = 23.67;
    int y = 10;
    printf("c= %c\n", c);
    c = c + 1;
    printf("c= %c\n", c);
    printf("j= %d\n", j);
    j = j-1;
    printf("j= %d\n", j);
    printf("k= %d\n", k);
    k -= 4;
    printf("k= %d\n", k);
    printf("Valores finais:\n\tc = %c\n\tj = %d\n\t",c,j);
    printf("y= %d, v=%f, x=%f\n", y, v, x);
    return 0;
}
