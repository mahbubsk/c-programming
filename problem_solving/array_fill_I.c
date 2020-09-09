#include <stdio.h>

int main()
{
    int i, N[10], V;
    scanf("%d", &V);
    for (i = 0; i < 11; i++)
    {
        N[i] = V;
        printf("N[%d] = %d\n", i, V);
        V += V;
    }

    return 0;
}