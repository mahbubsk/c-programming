
#include <stdio.h>

int main()
{
    long int i, input, num1 = 0, num2 = 1, temp;
    scanf("%li", &input);
    for (i = 0; i < input; i++)
    {

        temp = num1 + num2;
        num1 = num2;
        num2 = temp;
    }
    if (input > 0)
    {
        printf("%li\n", num1);
    }
    else
    {
        printf("%d is not valid for fibonacci", input);
    }
    return 0;
}

/*  0 1 1 2 3 5 8 13 21 34 55 89*/