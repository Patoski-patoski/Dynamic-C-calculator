#include "header.h"

void convertToBase()
{
    const char baseDigits[17] =
        {
            '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'
        };

    int convertedNumber[64];
    int numberToBeConverted = 0;
    int nextDigit;
    int storeNum;
    int base = 0, index = 0;


    bool validBase = false;

    do
    {
        printf("Enter the number you want to convert: ");
        if (scanf("%d", &numberToBeConverted) != 1)
        {
            printf("Invalid input. Please enter a number.\n");
            fflush(stdin);
            continue;
        }

        printf("Convert to base. choose from 2 - 16(Inclusive)? \n");
        if (scanf("%d", &base) != 1)
        {
            printf("Invalid base. Please enter a number.\n");
            fflush(stdin);
            continue;
        }
        if (base <= 0 || base == 1)
        {
            printf("Invalid base. Please enter a positive integer.\n");
            fflush(stdin);
            continue;
        }
        if (base > 16)
        {
            printf("Invalid base. Please enter a base between 2 and 16.\n");
            fflush(stdin);
            continue;
        }
        validBase = true;
    } while (!validBase);

    storeNum = numberToBeConverted;

    do
    {
        convertedNumber[index] = numberToBeConverted % base;
        ++index;
        numberToBeConverted /= base;
    } while (numberToBeConverted != 0);

    printf("%d, converted to base %d = ", storeNum, base);

    for (index--; index >= 0; index--)
    {
        nextDigit = convertedNumber[index];
        printf("%c", baseDigits[nextDigit]);
    }

    puts("");
}
