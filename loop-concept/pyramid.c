#include <stdio.h>
int main(void)
{
    int star, space = 4, i, j, k, l, space2 = 0, line, count = 9;

    for (i = 1; i <= 9; i += 2)
    {

        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for (star = 0; star < i; star++)
        {
            printf("*");
        }

        space--;
        printf("\n");

        if (i == 9)
        {
            for (line = 0; line <= 4; line++)
            {

                for (k = 0; k < space2; k++)
                {
                    printf(" ");
                }
                for (l = 0; l < count; l++)
                {
                    printf("*");
                }
                space2++;
                count -= 2;
                printf("\n");
            }
        }
    }

    return 0;
}
