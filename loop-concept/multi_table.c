#include <stdio.h>
#define ROWS 5
#define COLUMNS 5
#define SPACE_UNSCORE 10
int main()
{
    int i, j, product[ROWS][COLUMNS], row, column;
    printf("MULTIPLICATION TABLE\n");
    for (int k = 0; k < SPACE_UNSCORE; k++)
    {
        printf(" ");
    }

    for (j = 1; j <= COLUMNS; j++)
    {

        printf("%4d", j);
    }

    printf("\n");
    printf("        _______________________\n");

    for (i = 0; i < ROWS; i++)
    {
        row = i + 1;
        printf("%d (%d * %d)|", row, row, i + 1);
        for (j = 1; j <= COLUMNS; j++)
        {
            column = j;

            printf("%4d", column * row);
        }
        printf("\n");
    }

    return 0;
}