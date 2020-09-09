#include <stdio.h>

int main()
{
    int i, input1, input2;

    scanf("%d %d",&input1,&input2);

    for(i=1; i<=input2; i++){
        
        if(input1 != 1) {
            if(i%input1==1 && i!=1){
                printf("\n");
            }
        }
        else {
            if(i!=1){
                printf("\n");
            }
        }

        if(i%input1==0){
            printf("%d",i);
        } else{
            printf("%d ",i);
        }
        
    }
    printf("\n");
    return 0;
}

