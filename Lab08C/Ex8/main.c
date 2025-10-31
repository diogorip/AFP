#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    char input[100];
    printf("Digite uma palavra/frase para verificar se é um palíndromo: ");
    fgets(input, sizeof(input), stdin);

    if (isPalindrome(input)) {
        printf("A palavra/frase é um palíndromo.\n");
    } else {
        printf("A palavra/frase não é um palíndromo.\n");
    }

    return 0;
}
