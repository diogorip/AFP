#include <string.h>
#include <stdio.h>

int main() {
    char s1[100];
    fgets(s1, sizeof(s1), stdin);
    int len = strlen(s1);
    printf("String: %s\n", s1);
    printf("Tamanho: %d\n", len);

    return 0;
}
