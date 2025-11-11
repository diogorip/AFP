#include <stdio.h>
#include "zodiac.h"

ZodiacSign zodiacSignOf(Date date) {
    int month = date.month;
    int day = date.day;
    
    if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
        return ARIES;
    } else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
        return TAURUS;
    } else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) {
        return GEMINI;
    } else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) {
        return CANCER;
    } else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
        return LEO;
    } else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
        return VIRGO;
    } else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {
        return LIBRA;
    } else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {
        return SCORPIO;
    } else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
        return SAGITTARIUS;
    } else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) {
        return CAPRICORN;
    } else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
        return AQUARIUS;
    } else {
        return PISCES;
    }
}

void zodiacSignPrint(ZodiacSign sign) {
    switch (sign) {
        case ARIES:
            printf("Aries\n");
            break;
        case TAURUS:
            printf("Taurus\n");
            break;
        case GEMINI:
            printf("Gemini\n");
            break;
        case CANCER:
            printf("Cancer\n");
            break;
        case LEO:
            printf("Leo\n");
            break;
        case VIRGO:
            printf("Virgo\n");
            break;
        case LIBRA:
            printf("Libra\n");
            break;
        case SCORPIO:
            printf("Scorpio\n");
            break;
        case SAGITTARIUS:
            printf("Sagittarius\n");
            break;
        case CAPRICORN:
            printf("Capricorn\n");
            break;
        case AQUARIUS:
            printf("Aquarius\n");
            break;
        case PISCES:
            printf("Pisces\n");
            break;
    }
}