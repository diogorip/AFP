#include <stdio.h>
#include <stdlib.h>
#include "input.h"
#include "date.h"
#include "book.h"

int main() {

    printf("=== TESTE DO MÓDULO DATE ===\n\n");

    int day1 = 15;
    int month1 = 6;
    int year1 = 2020;

    Date date1 = dateCreate(&day1, &month1, &year1);
    printf("Teste 1: Criar data com dateCreate\n");
    printf("Data criada: ");
    datePrint(&date1);
    printf("\n\n");

    Date date2;
    printf("Teste 2: Ler data do utilizador com dateReadUser\n");
    dateReadUser(&date2);
    printf("Data lida: ");
    datePrint(&date2);
    printf("\n\n");

    printf("=== TESTE DO MÓDULO BOOK ===\n\n");

    char title1[] = "O Senhor dos Anéis";
    char author1[] = "J.R.R. Tolkien";
    int day3 = 29;
    int month3 = 7;
    int year3 = 1954;
    Date date3 = dateCreate(&day3, &month3, &year3);

    Book book1 = bookCreate(title1, author1, &date3);
    printf("Teste 3: Criar e imprimir livro 1\n");
    bookPrint(&book1);
    printf("\n");

    char title2[] = "1984";
    char author2[] = "George Orwell";
    int day4 = 8;
    int month4 = 6;
    int year4 = 1949;
    Date date4 = dateCreate(&day4, &month4, &year4);

    Book book2 = bookCreate(title2, author2, &date4);
    printf("Teste 4: Criar e imprimir livro 2\n");
    bookPrint(&book2);
    printf("\n");

    char title3[] = "Harry Potter e a Pedra Filosofal";
    char author3[] = "J.K. Rowling";
    int day5 = 26;
    int month5 = 6;
    int year5 = 1997;
    Date date5 = dateCreate(&day5, &month5, &year5);

    Book book3 = bookCreate(title3, author3, &date5);

    BookList list;
    list.actualSize = 0;

    list.elements[list.actualSize++] = book1;
    list.elements[list.actualSize++] = book2;
    list.elements[list.actualSize++] = book3;

    printf("Teste 5: Imprimir lista de livros\n");
    bookListPrint(&list);

    return EXIT_SUCCESS;
}