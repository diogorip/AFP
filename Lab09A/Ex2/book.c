#include "book.h"
#include <stdio.h>
#include <string.h>

Book bookCreate(char title[], char author[], Date date) {
    Book book;
    strncpy(book.title, title, 99);
    book.title[99] = '\0';
    strncpy(book.author, author, 99);
    book.author[99] = '\0';
    book.date = date;
    return book;
}

void bookPrint(Book book) {
    printf("========================================\n");
    printf("Título: %s\n", book.title);
    printf("Autor: %s\n", book.author);
    printf("Data de Lançamento: ");
    datePrint(book.date);
    printf("\n");
    printf("========================================\n");
}