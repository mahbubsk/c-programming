#include <stdio.h>
#define GETINPUT 50
#define ROWS 5
#define COLUMNS 5
int main()
{
    int i, j, car_code, frequency[ROWS][COLUMNS] = {{0}, {0}};
    char city;
    printf("for each person, enter the city code\nfollowed by the car code\nenter the letter x to indicate end.\n");
    for (i = 0; i < GETINPUT; i++)
    {
        scanf("%c", &city);
        if (city == 'x')
        {
            break;
        }
        scanf("%d", &car_code);
        if (city == 'b')
        {
            frequency[1][car_code]++;
        }
        else if (city == 'c')
        {
            frequency[2][car_code]++;
        }
        else if (city == 'd')
        {
            frequency[3][car_code]++;
        }
        else if (city == 'm')
        {
            frequency[4][car_code]++;
        }
    }
    printf("popularity table\n");
    printf("_______________________________\n");
    printf("city   ambassdor  fiat  dolphin  maruti\n");
    printf("_______________________________\n");
    for (i = 1; i <= 4; i++)
    {
        if (i == 1)
        {
            printf("bombay  ");
        }
        else if (i == 2)
        {
            printf("calcutta");
        }
        else if (i == 3)
        {
            printf("delhi   ");
        }
        else if (i == 4)
        {
            printf("madras  ");
        }
        for (j = 1; j <= 4; j++)
        {
            printf("%7d", frequency[i][j]);
        }
        printf("\n");
    }

    return 0;
}