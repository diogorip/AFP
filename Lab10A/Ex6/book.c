#include "book.h"
#include <stdio.h>
#include <string.h>

Book bookCreate(char *titleStr, char *authorStr, Date *date) {
    Book book;
    strncpy(book.title, titleStr, 99);
    book.title[99] = '\0';
    strncpy(book.author, authorStr, 99);
    book.author[99] = '\0';
    book.launchDate = *date;
    return book;
}

void bookPrint(Book *book) {
    printf("========================================\n");
    printf("Título: %s\n", book->title);
    printf("Autor: %s\n", book->author);
    printf("Data de Lançamento: ");
    datePrint(&book->launchDate);
    printf("\n");
    printf("========================================\n");
}

void bookListPrint(BookList *list) {
    printf("\n=== LISTA DE LIVROS (%d livros) ===\n\n", list->actualSize);
    
    for (int i = 0; i < list->actualSize; i++) {
        bookPrint(&list->elements[i]);
        printf("\n");
    }
}