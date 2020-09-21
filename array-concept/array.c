#include <stdio.h>
int main()
{

    int x[3];

    printf("write three numbers: ");
    scanf("%d %d %d", &x[0], &x[1], &x[2]);
    printf("you've written those values %d %d %d", x[0], x[1], x[2]);

    return 0;
}