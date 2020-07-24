#include <stdio.h>
int main()
{
    int i, j, rows = 6, space;
    for (i = 0; i < rows; i++)
    {
        for (space = 0; j < space; j++)
        {
            printf(" ");
        }

        printf(" ");
        for (j = 0; j < (2 * i - 1); j++)
        {
            printf("*");
        }
        space++;
        printf("\n");
    }
    return 0;
}