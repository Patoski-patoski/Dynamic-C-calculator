#include "header.h"

void divide()
{
    int num;
    int i;
    float fdiv;
    float arr[10];

    printf("How many numbers do you want to divide: ");
    if (scanf("%d", &num) != 1)
    {
        printf("Invalid input. Please enter a number.\n");
        return;
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
        printf("No valid input was provided. Exiting function...\n");
        return;
    }

    fdiv = arr[0];

    for (i = 1; i < num; i++)
        fdiv /= arr[i];

    printf("%.2f\n", fdiv);
}
