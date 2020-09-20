#include<stdio.h>

int main(){
    int input1, input2, i, result=0;
    scanf("%d",&input1);
    while(scanf("%d",&input2)){
        if(input2<=0){
            continue;
        } else{
            for(i=input1; i<input1+input2; i++){
                result +=i;
            }
            break;
        }

    }
    printf("%d\n",result);
    return 0; 
}