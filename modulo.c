#include "header.h"

void modulo()
{
    int i;
    int fmod = 0;
    int arr[2];

    printf("To find the module, Enter number: ");

    for (i = 0; i < 2; i++)
        scanf("%d", &arr[i]);

    fmod = arr[0] % arr[1];

    printf("Modulo of %d and %d = %d\n",arr[0], arr[1], fmod);
}