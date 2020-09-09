#include <stdio.h>

int main() {
    int startDay, startHour, startMin, startSec;
    int endDay, endHour, endMin, endSec;
    char a[4];

    scanf("%s%d", &a, &startDay);
    scanf("%02d : %02d : %02d", &startHour, &startMin, &startSec);
    scanf("%s%d", &a, &endDay);
    scanf("%02d : %02d : %02d", &endHour, &endMin, &endSec);
    // every starting element is converted by second.this calculation is start from here.
    long long totalStartSec = startSec;
    long long totalEndSec = endSec;
    totalStartSec += (startMin * 60);
    totalStartSec += (startHour * 60 * 60);
    totalStartSec += (startDay * 24 * 60 * 60);
    // every starting element is converted by second.this calculation is end right here.

    // every ending element is converted by second.this calculation is start from here.
    totalEndSec += (endMin * 60);
    totalEndSec += (endHour * 60 * 60);
    totalEndSec += (endDay * 24 * 60 * 60);
    // every ending element is converted by second.this calculation is end right here.
    
    long long duration = totalEndSec - totalStartSec;
    int day = duration / (60*60*24);
    duration = duration % (60*60*24);
    int hour = duration / (60*60);
    duration = duration % (60*60);
    int min = duration / 60;
    int sec = duration % 60;


    printf("%d dia(s)\n", day);
    printf("%d hora(s)\n", hour);
    printf("%d minuto(s)\n", min);
    printf("%d segundo(s)\n", sec);
    return 0;
}