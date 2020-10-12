#include <stdio.h>

int main(){
    float array[12][12], sum=0, count=0, avarage=0;
    int i, j;
    char input;
    scanf("%c",&input);
    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            scanf("%f",&array[i][j]);
        }
    }
    for(i=1; i<12; i++){
        
        for(j=0; j<i; j++){
            if(i==11&&j==11){
                j=10;
            }
           sum+=array[i][j];
           count++;
        }
    }
    avarage=sum/count;
    if(input=='S'){
        printf("%.1f\n",sum);
    } else if(input=='M'){
        printf("%.1f\n",avarage);
    }
    return 0;
}