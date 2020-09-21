#include <stdio.h>
int main()
{
    int a, b;
    char ch = 'c';
    while (ch != 'q' && ch != 'Q')
    {
        printf("enter a value\t");
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
        printf("type c to continue and type q to quit: \n");
        scanf(" %c", &ch);
    }

    return 0;
}