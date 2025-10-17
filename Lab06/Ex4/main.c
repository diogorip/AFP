#include <stdio.h>

int main() {
    char caracteres[10];
    int letras = 0, maiusculas = 0;

    printf("Insira 10 caracteres: ");
    for (int i = 0; i < 10; i++) {
        scanf(" %c", &caracteres[i]);
        if ((caracteres[i] >= 'a' && caracteres[i] <= 'z') || (caracteres[i] >= 'A' && caracteres[i] <= 'Z')) {
            letras++;
            if (caracteres[i] >= 'A' && caracteres[i] <= 'Z') {
                maiusculas++;
            }
        }
    }

    printf("Foram inseridas: %d letras do alfabeto, das quais %d são maiúsculas.\n", letras, maiusculas);

    return 0;
}
