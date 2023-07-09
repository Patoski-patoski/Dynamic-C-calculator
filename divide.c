#include "header.h"

void divide()
{
    int num;
    int i;
    float fdiv;
    float arr[10];
    int count;

    printf("How many numbers do you want to divide: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
        scanf("%f", &arr[i]);

    fdiv = arr[0];

    for (i = 1; i < num; i++)
        fdiv /= arr[i];

    printf("%.2f\n", fdiv);
}