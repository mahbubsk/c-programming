#include <stdio.h>
#define NUMBERS 10
int main()
{
    int i;
    float numbers[NUMBERS], total = 0.0, value;
    printf("Enter ten numbers : ");

    for (i = 0; i < NUMBERS; i++)
    {
        scanf("%f", &value);
        numbers[i] = value;
        total += numbers[i] * numbers[i];
    }

    for (i = 0; i < NUMBERS; i++)
    {
        printf("numbers[%d] = %.2f\n", i + 1, numbers[i]);
    }
    printf("total = %.2f", total);

    return 0;
}