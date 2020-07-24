#include <stdio.h>
int main()
{
    /* 2D array declaration*/
    int abc[2][1][3];
    /*Counter variables for the loop*/
    int i, j, k;
    for (i = 0; i < 2; i++)

    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
            {
                printf("Enter value for abc[%d][%d][%d]:", i, j, k);
                scanf("%d", &abc[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("%d\t%d\t%d", i, j, k);

    return 0;
}