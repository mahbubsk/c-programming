#include <stdio.h>

int main()
{
    float a, b, c, area, perimetro;
    scanf("%f %f %f", &a, &b, &c);
    if ((a + b) > c && (a + c) > b && (b + c) > a)
    {
        perimetro = a + b + c;
        printf("perimetro = %.1f\n", perimetro);
    }
    else
    {
        area = 0.5 * ((a + b) * c);
        printf("Area = %.1f\n", area);
    }

    return 0;
}