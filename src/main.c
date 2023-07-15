#include "header.h"

int main()
{
    int choice;
    puts("################################");
    puts("What do you want to calculate?\n");
    puts("press\n 0 for addition\n 1 for subtraction\n 2 for multiplication\n 3 for division\n 4 for modulos\n 5 to convert to a base\n");

    scanf("%d", &choice);
    switch (choice)
    {
    case 0:
        add();
        break;
    case 1:
        subtract();
        break;
    case 2:
        multiply();
        break;
    case 3:
        divide();
        break;
    case 4:
        modulo();
        break;
    case 5:
        convertToBase();
        break;

    default:
        puts("\nUnknown choice: Please choose from 0 - 5\n");
        break;
    }
}