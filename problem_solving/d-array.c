#include <stdio.h>

int main(){
    float array[12][12], sum=0;
    int input, i, j;
    char char_input;
    scanf("%d",&input);
    scanf(" %c",&char_input);
    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            scanf("%f",&array[i][j]);
        }
    }
    if(char_input=='S'){
       for(i=0; i<12; i++){
            for(j=input; j<=input; j++){
                sum+=array[i][j];
            }
        }
        printf("%.1f\n",sum); 
    } else if(char_input=='M'){
        for(i=0; i<12; i++){
            for(j=input; j<=input; j++){
                sum+=array[i][j];
            }
        }
        printf("%.1f\n",sum/12);
    }
    
    return 0;
}
