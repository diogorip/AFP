#pragma once

typedef struct {
    int day;
    int month;
    int year;
} Date;

Date dateCreate(int *day, int *month, int *year);

void dateReadUser(Date *date);

void datePrint(Date *date);