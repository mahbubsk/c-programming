#include <stdio.h>

int main()
{
    float input_1,input_3,result = 0,media;
    int input_2, flag = -1;
    int count = 0;
    
    while(1){
        scanf("%f",&input_1);
        if(input_1 >0 && input_1 <=10){
            result += input_1;
            count++;
            if(count == 2){
                media = result / 2;
                printf("media = %.2f\n",media);
                result = 0.0;
                count = 0;
                while(flag < 0){
                printf("novo calculo (1-sim 2-nao)\n");
                    scanf("%d",&input_2);
                    if(input_2 == 2){
                        flag = 2;
                    }else if(input_2 == 1){
                        flag = 1;
                    } else{
                        continue;
                    }
                }
                if(flag == 2){
                    break;
                } else{
                    flag=0;
                }
            }
        } else{
            printf("nota invalida\n");
        }
    }
    result = 0;
    return 0;
}