#include <stdio.h>
#include "date.h"
#include "input.h"

Date dateCreate(int day, int month, int year) {
    Date date;
    date.day = day;
    date.month = month;
    date.year = year;
    return date;
}

Date dateReadUser() {
    Date date;
    printf("Day: ");
    readInteger(&date.day);
    printf("Month: ");
    readInteger(&date.month);
    printf("Year: ");
    readInteger(&date.year);
    return date;
}

void datePrint(Date date) {
    printf("%02d/%02d/%d\n", date.day, date.month, date.year);
}