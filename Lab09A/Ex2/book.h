#pragma once

#include "date.h"

typedef struct {
    char title[100];
    char author[100];
    Date date;
} Book;

void bookPrint(Book book);
Book bookCreate(char title[], char author[], Date date);