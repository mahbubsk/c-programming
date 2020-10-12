#include <stdio.h>

int main(){
    double array[12][12], count=0, avarage=0, sum=0;
    int i, j, start=5, end=6;
    char input;
    scanf("%c",&input);
    for(i=0; i<12; i=i+1){
        for(j=0; j<12; j=j+1){
            scanf("%lf",&array[i][j]);
        }
    }
    for(i=7; i<12; i=i+1){
        for(j=start; j<=end; j=j+1){
            sum=sum+array[i][j];
            count++;
        }
        start--;
        end++;
    }
    avarage=sum/count;
    if(input=='S'){
        printf("%.1lf\n",sum);
    } else if(input=='M'){
        printf("%.1lf\n",avarage);
    }

    return 0;
}