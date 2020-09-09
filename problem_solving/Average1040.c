#include <stdio.h>

int main()
{
    float a, b, c, d, e;
    double avg, avg1;
    scanf("%f %f %f %f", &a, &b, &c, &d);
    avg = ((a * 2) + (b * 3) + (c * 4) + d) / 10;
    printf("Media: %.1lf\n", avg);

    if (avg >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if (avg < 5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else
    {
        printf("Aluno em exame.\n");
        scanf("%f", &e);
        printf("Nota do exame: %.1lf", e);
        avg1 = (avg + e) / 2;
        if (avg1 >= 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", avg1);
    }
    return 0;
}

// #include <stdio.h>

// int main()
// {
//     float n1, n2, n3, n4, n5;
//     double result, result1;
//     scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
//     result = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10;
//     if (result >= 7.0)
//     {
//         printf("Media: %.1lf\n", result);
//         printf("Aluno aprovado.\n");
//     }

//     else if (result > 5.0 && result < 6.9)
//     {
//         printf("Media: %.1lf\n", result);
//         printf("Aluno em exame.\n");
//         printf("Nota do exame: %.1lf",e);
//         scanf("%f", &n5);
//         result1 = (result + n5) / 2;
//         if (result1 >= 5.0)
//         {
//             printf("Aluno aprovado.\n");
//         }
//         else
//         {
//             printf("Aluno reprovado.\n");
//         }

//         printf("Media final: %.1lf", result1);
//     }
//     else if (result < 5.00)
//     {
//         printf("Media: %.1lf\n", result);
//         printf("Aluno reprovado.\n");
//     }

//     return 0;
// }