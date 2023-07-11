#include "header.h"

void convertToBase()
{
    const char baseDigits[17] =
        {
            '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    int convertedNumber[64];
    int numberToBeConverted = 0;
    int nextDigit;
    int base = 0, index = 0;

    do
    {
        printf("Enter the number you want to convert: ");
        scanf("%d", &numberToBeConverted);
    } while (numberToBeConverted <= 0);

    do
    {
        printf("convert to base? ");
        scanf("%d", &base);
    } while (base <= 0);

    do
    {
        convertedNumber[index] = numberToBeConverted % base;
        ++index;
        numberToBeConverted /= base;
    } while (numberToBeConverted != 0);

    for (index--; index >= 0; index--)
    {
        nextDigit = convertedNumber[index];
        printf("%c", baseDigits[nextDigit]);
    }

    puts("");
    return;
}