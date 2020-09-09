#include <stdio.h>
int main(){
    int input_1, input_2, i, temp, result=0;
    
    while(1){
        scanf("%d %d",&input_1,&input_2);
        if(input_1 <=0 || input_2<=0){
            break;
        }
        if(input_1>input_2){
            temp = input_1;
            input_1 = input_2;
            input_2 = temp;
        }
        
        for(i=input_1; i<=input_2; i++){
            printf("%d ",i);
            result += i;
        }
        printf("sum=%d\n",result);
        result = 0;
    }
    
    return 0;
}