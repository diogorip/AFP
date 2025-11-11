#ifndef ZODIAC_H
#define ZODIAC_H

#include "date.h"

typedef enum {
    ARIES,
    TAURUS,
    GEMINI,
    CANCER,
    LEO,
    VIRGO,
    LIBRA,
    SCORPIO,
    SAGITTARIUS,
    CAPRICORN,
    AQUARIUS,
    PISCES
} ZodiacSign;

ZodiacSign zodiacSignOf(Date date);
void zodiacSignPrint(ZodiacSign sign);

#endif