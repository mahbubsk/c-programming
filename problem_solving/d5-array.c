#include <stdio.h>

int main(){
    float array[12][12], sum=0, avarage=0, count=0;
    int i, j, initial=10;
    char input;
    scanf("%c",&input);
    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            scanf("%f",&array[i][j]);
        }
    }

    for(i=0; i<12; i++){
        for(j=initial; j>=0; j--){
            sum+=array[i][j];
            count++;
        }
        initial--;
    }
    avarage=sum/count;
    if(input=='S'){
        printf("%.1f\n",sum);
    } else if(input=='M'){
        printf("%.1f\n",avarage);
    }
    return 0;
}