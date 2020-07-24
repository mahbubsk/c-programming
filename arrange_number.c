#include <stdio.h>
int main()
{
    int i, j, temp, numbers[10] = {2, 3, 6, 10, 5, 9, 8, 7, 1, 4};
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (numbers[j] < numbers[j + 1])
            {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d\n", numbers[i]);
    }
    

    return 0;
}