#include <stdio.h>

int main(){
    double array[12][12], count=0, avarage=0, sum=0;
    int i, j, start=5, end=1;
    char input;
    scanf("%c",&input);

    for(i=0; i<12; i=i+1){
        for(j=0; j<12; j=j+1){
            scanf("%lf",&array[i][j]);
        }
    }

    for(i=1; i<11; i=i+1){
        for(j=0; j<end; j=j+1){
            sum+=array[i][j];
            count++;
        }
        if(i==5){
            end++;
        }
        if(i>4){
            end--;
        } else{
            end++;
        }
        
    }

    avarage=sum/count;
    if(input=='S'){
        printf("%.1lf\n",sum);
    } else if(input=='M'){
        printf("%.1lf\n",avarage);
    }

    return 0;
}

