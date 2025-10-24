#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    printf("String 1: %s\n", s1);
    printf("String 2: %s\n", s2);
    printf("Tamanho 1: %d\n", len1);
    printf("Tamanho 2: %d\n", len2);
    if (len1 > len2) {
        printf("String 1 é maior\n");
        printf("Diferença de tamanho: %d\n", len1 - len2);
    } else if (len1 < len2) {
        printf("String 2 é maior\n");
        printf("Diferença de tamanho: %d\n", len2 - len1);
    } else {
        printf("As strings têm o mesmo tamanho\n");
    }
    return 0;
};
