#include <stdio.h>
int main()
{
    float input, result, calculation, calculation2;
    scanf("%f", &input);
    if (input > 0 && input <= 2000)
    {
        printf("Isento\n");
    }
    else if (input > 2000.01 && input <= 3000)
    {
        calculation = input - 2000;
        result = calculation * 0.08;
        printf("R$ %.2f\n", result);
    }
    else if (input > 3000.01 && input <= 4500)
    {
        calculation = 1000 * 0.08;
        calculation2 = (input - 3000) * 0.18;
        result = calculation + calculation2;
        printf("R$ %.2f\n", result);
    }
    else if (input > 4500)
    {
        calculation = (1000 * 0.08) + (1500 * 0.18);
        calculation2 = (input - 4500) * 0.28;
        result = calculation + calculation2;
        printf("R$ %.2f\n", result);
    }

    return 0;
}