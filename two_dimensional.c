#include <stdio.h>
#define ROW 4
#define COLUMN 3
int main()
{

    int array[4][3] = {
        {1, 4, 7},
        {7, 8, 9},
        {1, 2, 3},
        {4, 5, 6}},
        array2[4][3] = {{1, 4, 7}, {7, 8, 9}, {1, 2, 3}, {4, 5, 6}};
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {

            printf("%d\t", array[i][j] + array2[i][j]);
        }
        printf("\n");
    }
    return 0;
}