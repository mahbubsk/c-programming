#include <stdio.h>
int main()
{
    int input;
    scanf("%d", &input);
    if (input == 61)
    {
        printf("Brasilia\n");
    }
    else if (input == 71)
    {
        printf("Salvador\n");
    }
    else if (input == 11)
    {
        printf("Sao Paulo\n");
    }
    else if (input == 21)
    {
        printf("Rio de Janeiro\n");
    }
    else if (input == 32)
    {
        printf("Juiz de Fora\n");
    }
    else if (input == 19)
    {
        printf("Campinas\n");
    }
    else if (input == 27)
    {
        printf("Vitoria\n");
    }
    else if (input == 31)
    {
        printf("Belo Horizonte\n");
    }
    else
    {
        printf("DDD nao cadastrado\n");
    }

    return 0;
}