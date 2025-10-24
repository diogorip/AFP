#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s1[100];
    printf("Introduza uma string: ");
    fgets(s1, sizeof(s1), stdin);

    for (int i = 0; s1[i]; i++) {
        s1[i] = toupper(s1[i]);
    }

    printf("%s\n", s1);
    return 0;
};
