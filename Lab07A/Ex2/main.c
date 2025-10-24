#include <string.h>
#include <stdio.h>

int main() {
    char s1[50], s2[50];

    printf("Introduza a primeira frase: ");
    scanf("%s", s1);

    while (getchar() != '\n');

    printf("Introduza a segunda frase: ");
    fgets(s2, sizeof(s2), stdin);

    puts(s1);
    puts(s2);

    return 0;
}
