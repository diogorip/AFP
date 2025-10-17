#include <stdio.h>

int main() {
    char caracteres[] = {'p', 'A', 'e', 'r', 'd', 'n', 'r', 'e', 'C', ' '};
    int i;

    for (i = 0; i < 9; i += 2) {
        char temp = caracteres[i];
        caracteres[i] = caracteres[i + 1];
        caracteres[i + 1] = temp;
    }

    for (i = 0; i < 10; i++) {
        printf("%c", caracteres[i]);
    }
    printf("\n");

    return 0;
}
