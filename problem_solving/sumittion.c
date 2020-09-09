#include <stdio.h>

int main()
{
    long input1, input2, result = 0, j, temp;
    scanf("%ld %ld", &input1, &input2);
    if (input1 < input2)
    {
        temp = input1;
        input1 = input2;
        input2 = temp;
    }
    for (j = input2; j <= input1; j++)
    {
        if (j % 2 == 1)
        {
            result += j;
        }
    }
    printf("%ld\n", result);

    return 0;
}