#include <stdio.h>
#include <stdbool.h>

int main()
{
    int i, j, input1, input2,is_prime=0;
    scanf("%d",&input1);
    
    for(i=0; i<input1; i++){

        scanf("%d",&input2);

        for(j=input2-1; j>1; j--){
            if(input2%j==0){
                is_prime=1;
                break;
            } else{
                is_prime=0;
            }
        }
        if(is_prime){
            printf("%d nao eh primo\n",input2);
        } else{
            printf("%d eh primo\n",input2);
        }

        
       
        
    }
    return 0;
}