#include <stdio.h>

int main()
{
    int i;
    int arr[10];
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (arr[i] > 0)
        {
            printf("X[%d] = %d\n", i, arr[i]);
        }
        else
        {
            arr[i] = 1;
            printf("X[%d] = %d\n", i, arr[i]);
        }
    }

    return 0;
}