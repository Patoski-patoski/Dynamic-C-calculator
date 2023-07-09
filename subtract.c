#include "header.h"
#include <stdio.h>
#include <stdbool.h>


void subtract()
{
    int num;
    int i;
    float fdiff;
    float arr[40];
    int count;

    printf("How many numbers do you want to subtract: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        scanf("%f", &arr[i]);
        count++;
    }
    fdiff = arr[0];
    for (i = count; i >= 1; i--)
        fdiff -= arr[i];

    printf("%.2f\n", fdiff);
}