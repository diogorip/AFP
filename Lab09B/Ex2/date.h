#ifndef DATE_H
#define DATE_H

typedef struct {
    int day;
    int month;
    int year;
} Date;

Date dateCreate(int day, int month, int year);
Date dateReadUser();
void datePrint(Date date);

#endif