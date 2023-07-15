#include "header.h"

void add()
{
    int num;
    int i;
    float fsum;
    float arr[30];
    bool validInput = false;

    do
    {
        printf("How many numbers do you want to add?: ");
        if (scanf("%d", &num) != 1)   //to check if there are more input numbers
        {
            printf("Please enter a valid number\n");
            fflush(stdin);
            continue;
        }
        validInput = true;

        for (i = 0; i < num; i++)
        {
            printf("Enter number %d: ", i + 1);
            if (scanf("%f", &arr[i]) != 1)
            {
                printf("Please enter a valid number\n");
                fflush(stdin);
                i--;
                continue;
            }            
        }

        for (i = 0; i < num; i++)
            fsum += arr[i];

        printf("%.2f", fsum);
    
    } while (!validInput);
    
}