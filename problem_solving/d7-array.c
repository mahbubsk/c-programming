
#include <stdio.h>

int main()
{
    float array[12][12], count=0, avarage=0, sum=0;
    int i, j, start=1, end=10;
    char input;
    scanf("%c",&input);
    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            scanf("%f",&array[i][j]);
        }
    }
    
    for(i=0; i<=4; i++){
        for(j=start; j<=end; j++){
            sum+=array[i][j];
            count++;
        }
        start++;
        end--;
    }
    avarage=sum/count;
    if(input=='S'){
        printf("%.1f\n",sum);
    } else if(input=='M'){
        printf("%.1f\n",avarage);
    }
    return 0;
}