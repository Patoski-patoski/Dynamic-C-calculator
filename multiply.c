#include "header.h"

void multiply()
{
    int num;
    int i;
    float fmul = 1;
    float arr[40];

    printf("How many numbers do you want to multiply: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
        scanf("%f", &arr[i]);
    for (i = 0; i < num ; i++)
        fmul *= arr[i];

    printf("%.2f\n", fmul);
}