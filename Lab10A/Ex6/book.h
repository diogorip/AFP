#pragma once

#include "date.h"

typedef struct {
    char title[100];
    char author[100];
    Date launchDate;
} Book;

#define BOOK_LIST_MAX 1000
typedef struct bookList {
    Book elements[BOOK_LIST_MAX];
    int actualSize;
} BookList;

Book bookCreate(char *titleStr, char *authorStr, Date *date);

void bookPrint(Book *book);

void bookListPrint(BookList *list);