#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
int main()
{
    time_t t;
    srand((unsigned)time(&t));
    int chosen_number, chance = 3;
    bool is_loss = true;
    int lucky_number = rand() % 5;
    while (chance > 0)
    {
        printf("guess the lucky number:(chance = %d) ", chance);
        scanf("%d", &chosen_number);

        if (lucky_number == chosen_number)
        {
            printf("congratulation you've chosen the currct number\n");
            is_loss = false;
            break;
        }
        chance--;
    }
    if (is_loss)
    {
        printf("oh!! shit you've loss, lucky number is %d", lucky_number);
    }
    return 0;
}