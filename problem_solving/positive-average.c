#include <stdio.h>
int main()
{

    double numbers, result = 0, cal;
    int i, j = 0;
    for (i = 0; i < 6; i++)
    {
        scanf("%lf", &numbers);
        if (numbers > 0)
        {
            j++;
            result = (result + numbers);
        }
    }
    for (i = 0; i < 6; i++)
    {
        if (numbers > 0)
        {
            cal = result / j;
        }
    }
    printf("%d valores positivos\n%.1lf\n", j, cal);
    return 0;
}