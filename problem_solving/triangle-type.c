#include <stdio.h>

int main()
{
    double a, b, c, result;

    scanf("%lf %lf %lf", &a, &b, &c);
    if (a >= (b + c) && b >= (a + c) && c >= (a + b))
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if (a * a == (b * b) + (c * c) || c * c == (b * b) + (a * a) || b * b == (a * a) + (c * c))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if (a * a > (b * b) + (c * c) || c * c > (b * b) + (a * a) || b * b > (a * a) + (c * c))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if (a * a < (b * b) + (c * c) || c * c < (b * b) + (a * a) || b * b < (a * a) + (c * c))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if (a == b == c || b == a == c || c == b == a)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    if ((a == b && a != c) || (b == c && c != a) || (c == a && c != b))
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}