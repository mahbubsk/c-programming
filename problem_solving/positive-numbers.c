#include <stdio.h>
int main()
{

    double numbers;
    int i, j = 0;
    for (i = 0; i < 6; i++)
    {
        scanf("%lf", &numbers);
        if (numbers > 0)
        {
            j++;
        }
    }

    printf("%d valores positivos\n", j);

    return 0;
}