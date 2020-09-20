#include <stdio.h>

int main(){
    int input1, input2, i, result=0, count=0;
    scanf("%d",&input1);
    while(scanf("%d",&input2)){
        if(input1>=input2){
            continue;
        } else{
            for(i=input1; i<=input2; i++){
                result+=i;
                count++;
                if(result==input2 || result>input2){
                    break;
                }
                
            }
            break;
            
        }
    }
    printf("%d\n",count);

    return 0;
}