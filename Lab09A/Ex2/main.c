#include <stdio.h>
#include <stdlib.h>
#include "input.h"
#include "date.h"
#include "book.h"

int main() {

    char title[100];
    char author[100];
    Date date;
    Book book;

    printf("=== SISTEMA DE GESTÃO DE LIVROS ===\n\n");

    printf("Introduza o título do livro: ");
    readString(title, 100);

    printf("Introduza o autor do livro: ");
    readString(author, 100);

    printf("Introduza a data de lançamento:\n");
    date = dateReadUser();

    book = bookCreate(title, author, date);

    printf("\n=== LIVRO REGISTADO ===\n");
    bookPrint(book);

    return EXIT_SUCCESS;
}