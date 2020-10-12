#include <stdio.h>

int main(){
    float array[12][12], sum=0, count=0, avarage=0;
    char input;
    int i, j;
    scanf("%c",&input);
    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            scanf("%f",&array[i][j]);
        }
    }
    for(i=0; i<12; i++){
        for(j=i+1; j<12; j++){
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
    
}