#include <stdio.h>
#include <string.h>

int main() {
    char s1[100];
    printf("Introduza uma string: ");
    fgets(s1, sizeof(s1), stdin);

    for (int i = 0; s1[i] != '\0'; i++) {
        if (s1[i] >= 'a' && s1[i] <= 'z') {
            s1[i] -= 32;
        }
    }

    printf("%s\n", s1);
    return 0;
}
