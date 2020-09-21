/*      *
 *     ***
 *    *****
 *   ******* 
 *    *****
 *     ***
 *      *
 * 
 *  we'll print a awesome diamond like this.
 * 
 *  *********
 *   *******
 *    *****
 *     ***
 *      *
 *     ***
 *    *****
 *   ******* 
 *  *********
 * 
*/
/* this program is for diamond*/
#include <stdio.h>
int main()
{
    // int i, j, stars = 0, rows = 15, spaces = rows - 1;
    // for (i = 0; i < rows * 2; i++)
    // {
    //     for (j = 0; j <= spaces; j++)
    //     {
    //         printf("+");
    //     }
    //     for (j = 0; j < stars * 2 - 1; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    //     if (i < rows)
    //     {
    //         spaces--;
    //         stars++;
    //     }
    //     else
    //     {
    //         spaces++;
    //         stars--;
    //     }
    // }
    /*diamond is created*/
    /*double pyramid is starting from here*/
    int i, j, stars = 4, rows = 5, spaces = 0;
    for (i = 0; i < rows * 2; i++)
    {
        for (j = 1; j < spaces; j++)
        {
            printf(" ");
        }
        for (j = 0; j < 2 * stars - 1; j++)
        {
            printf("*");
        }
        printf("\n");
        if (i < rows)
        {
            spaces++;
            stars--;
        }
        else
        {
            spaces--;
            stars++;
        }
    }

    return 0;
}