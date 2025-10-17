#include <stdio.h>

int main() {
    short n1 = 32767;
    short n2 = n1 + 1;
    int n3 = n1 + 1;
    printf("n1=%d\nn2=%d\nn3=%d\n", n1, n2, n3);
    return 0;
}
