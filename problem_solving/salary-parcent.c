#include <stdio.h>
int main()
{
    float category, result;
    scanf("%f", &category);
    if (category >= 0 && category <= 400.00)
    {
        result = (0.15 * category) + category;
        printf("Novo salario: %.2f\nReajuste ganho : %.2f\nEm percentual : 15 %%\n", result, 0.15 * category);
    }
    else if (category >= 400.01 && category <= 800.00)
    {
        result = (0.12 * category) + category;
        printf("Novo salario: %.2f\nReajuste ganho : %.2f\nEm percentual : 12 %%\n", result, 0.12 * category);
    }
    else if (category >= 800.01 && category <= 1200.00)
    {
        result = (0.10 * category) + category;
        printf("Novo salario: %.2f\nReajuste ganho : %.2f\nEm percentual : 10 %%\n", result, 0.10 * category);
    }
    else if (category >= 1200.01 && category <= 2000.00)
    {
        result = (0.07 * category) + category;
        printf("Novo salario: %.2f\nReajuste ganho : %.2f\nEm percentual : 7 %%\n", result, 0.07 * category);
    }
    if (category >= 2000.01)
    {
        result = (0.04 * category) + category;
        printf("Novo salario: %.2f\nReajuste ganho : %.2f\nEm percentual : 4 %%\n", result, 0.04 * category);
    }

    return 0;
}