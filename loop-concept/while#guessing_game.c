#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
int main()
{
    time_t t;
    srand((unsigned)time(&t));
    int chosen_number, chance = 3;
    bool is_win = false;
    int lucky_number = rand() % 5;
    while (chance > 0)
    {
        printf("guess the lucky number:(chance = %d) ", chance);
        scanf("%d", &chosen_number);

        if (lucky_number == chosen_number)
        {
            printf("congratulation you've chosen the currct number\n");
            is_win = true;
            break;
        }
        chance--;
        if (chosen_number > lucky_number)
        {
            printf("you've chosen big number\n");
        }
        else
        {
            printf("you've chosen small number\n");
        }
    }

    if (is_win == false)
    {
        printf("oh!! shit you've loss, lucky number is %d", lucky_number);
    }
    return 0;
}