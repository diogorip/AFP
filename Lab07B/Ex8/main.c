#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    printf("Introduza a frase: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Introduza o carácter a remover: ");
    scanf(" %c", &ch);
    char new_str[100];
    int j = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != ch) {
            new_str[j++] = str[i];
        }
    }
    new_str[j] = '\0';
    printf("%s\n", new_str);
    return 0;
}
