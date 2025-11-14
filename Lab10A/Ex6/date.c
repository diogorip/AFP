#include "date.h"
#include "input.h"
#include <stdio.h>

Date dateCreate(int *day, int *month, int *year) {
    Date date;
    date.day = *day;
    date.month = *month;
    date.year = *year;
    return date;
}

void dateReadUser(Date *date) {
    printf("Dia: ");
    readInteger(&date->day);

    printf("Mês: ");
    readInteger(&date->month);

    printf("Ano: ");
    readInteger(&date->year);
}

void datePrint(Date *date) {
    printf("%02d/%02d/%04d", date->day, date->month, date->year);
}