#include "header.h"

void multiply()
{
    int num;
    int i;
    float fmul = 1;
    float arr[40];

    bool validInput = false;

    do
    {
        printf("How many numbers do you want to multiply: ");
        if (scanf("%d", &num) != 1)
        {
            printf("Invalid input. Please enter a number.\n");
            fflush(stdin);
            continue;
        }
        if (num <= 0)
        {
            printf("Invalid input. Please enter a positive integer.\n");
            fflush(stdin);
            continue;
        }

        for (i = 0; i < num; i++)
        {
            printf("Enter number %d: ", i + 1);
            if (scanf("%f", &arr[i]) != 1)
            {
                printf("Invalid input. Please enter a number.\n");
                fflush(stdin);
                i--;
            }
        }

        if (i == 0)
        {
            printf("No valid input was provided. Please try again.\n");
            validInput = false;
        }
        validInput = true;

    } while (!validInput);

    for (i = 0; i < num; i++)
        fmul *= arr[i];

    printf("%.2f\n", fmul);
}