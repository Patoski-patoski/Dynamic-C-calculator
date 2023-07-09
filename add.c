#include "header.h"
#include <stdio.h>
#include <stdbool.h>

bool isFloat(const char *input)
{
    int i = 0;
    while (input[i] != '\0')
    {
        if (input[i] == '.')
            return true;
        i++;
    }
    return false;
}

void add()
{
    int sum = 0;
    int num;
    int i;
    float fsum;
    float arr[40];

    printf("How many numbers do you want to add: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
        scanf("%f", &arr[i]);

    for (i = 0; i < num; i++)
        fsum += arr[i];

    printf("%.2f", fsum);
}