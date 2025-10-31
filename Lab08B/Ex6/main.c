#include <stdio.h>

void classificarNota(float nota) {
     if (nota >= 9.5) {
         printf("Aprovado");
     } else if (nota >= 7.5) {
         printf("Recuperação");
     } else {
         printf("Reprovado");
     }
}

int main() {
    float nota;
    printf("Digite a nota: ");
    scanf("%f", &nota);
    classificarNota(nota);
    return 0;
}
