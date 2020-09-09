#include <stdio.h>
int main()
{
    double M[12][12], result = 0.0;
    int i, j, array_line, medium;
    char x[2];
    scanf("%d %c", &array_line, &x);
    for (i = 0; i < array_line; i++)
    {
        for (j = 0; j < 11; j++)
        {
            scanf("%lf", &M[i][j]);
        }
    }
    result += M[i][j];
    medium = result / 12;

    if (x[0] == 'S')
    {
        printf("%lf", result);
    }
    if (x[0] == 'M')
    {
        printf("%lf", medium);
    }

    return 0;
}

// #include <stdio.h>
// #define ROWS 12
// #define COLUMNS 12

// int main()
// {
//     int i, j, input;
//     double sum_result = 0.0, medium;
//     char definder;
//     float M[ROWS][COLUMNS];
//     scanf("%d", &input);

//     for (i = input; i <= input; i++)
//     {
//         scanf(" %c", &definder);

//         if (definder == 'S')
//         {
//             for (j = 0; j < COLUMNS; j++)
//             {
//                 scanf("%lf", &M[i][j]);
//                 sum_result += M[i][j];
//             }
//             break;
//         }
//         if (definder == 'M')
//         {
//             for (j = 0; j < COLUMNS; j++)
//             {
//                 scanf("%lf", &M[i][j]);
//                 sum_result += M[i][j];
//             }
//         }
//     }
//     medium = sum_result / 12.0;
//     if (definder == 'S')
//     {
//         printf("%.2f\n", sum_result);
//     }
//     if (definder == 'M')
//     {
//         printf("%.2f\n", medium);
//     }

//     return 0;
// }