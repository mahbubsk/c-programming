#include <stdio.h>

int main()
{
    int width;
    int height;
    printf("enter a width ");
    scanf("%d", &width);
    printf("enter a height ");
    scanf("%d", &height);
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
/*
 * 
*/