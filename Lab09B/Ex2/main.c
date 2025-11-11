#include <stdio.h>
#include <stdlib.h>
#include "input.h"
#include "date.h"
#include "zodiac.h"

int main() {

    printf("Enter your birth date:\n");
    Date birthDate = dateReadUser();
    
    printf("\nYour birth date: ");
    datePrint(birthDate);
    
    printf("Your zodiac sign: ");
    ZodiacSign sign = zodiacSignOf(birthDate);
    zodiacSignPrint(sign);

    return EXIT_SUCCESS;
}
