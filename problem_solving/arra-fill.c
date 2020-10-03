#include <stdio.h>

int main(){
    int number[1000];
    int i, j, input;
    scanf("%d",&input);
    for(i=0,j=0; i<1000; i++){    
        printf("N[%d] = %d\n",i,j);
        j++;
        if(j==input){
            j=0;
        }
    }
    
    return 0;
}