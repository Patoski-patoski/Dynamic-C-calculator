#include "header.h"

void modulo()
{
    int i;
    int fmod = 0;
    int arr[2];
    int number;
    int modulo;

    bool validInput = false;
    printf("To find the module, ");

    do
    {
        printf("Enter number: ");

        if (scanf("%d", &arr[0]) != 1)
        {
            fflush(stdin);
            printf("error: Enter valid numbers\n");
            continue;
        }
        printf("module ? ");

        if (scanf("%d", &arr[1]) != 1)
        {
            fflush(stdin);
            printf("error: Enter valid numbers\n");
            continue;
        }

        number = arr[0];
        modulo = arr[1];

        fmod = number % modulo;

        printf("Modulo of %d and %d = %d\n", number, modulo, fmod);
        validInput = true;
        
    } while (!validInput);
}