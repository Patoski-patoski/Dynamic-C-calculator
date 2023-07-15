#include "header.h"
#include <stdio.h>
#include <stdbool.h>

void subtract()
{
    int num;
    int i;
    float fdiff;
    float arr[30];
    int count;
    bool validInput = false;

    do
    {
        printf("How many numbers do you want to subtract: ");
        if (scanf("%d", &num) != 1)
        {
            printf("Please enter a valid number:\n");
            fflush(stdin);
            continue;
        }

        for (i = 0; i < num; i++)
        {
            printf("Enter the number %d: ", i + 1);
            if (scanf("%f", &arr[i]) != 1)
            {
                printf("Please enter a valid number: \n");
                validInput = false;
                fflush(stdin);
                i--;
            }
            count += i;
        }

        validInput = true;

        fdiff = arr[0];
        for (; count >= 1; count--)
            fdiff -= arr[count];

        printf("%.2f\n", fdiff);

    } while (!validInput);
}