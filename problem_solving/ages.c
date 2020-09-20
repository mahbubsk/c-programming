#include <stdio.h>

int main()
{
    int ages;
    float result, increase = 0.0, final_result;
    while(scanf("%d",&ages)){
        if(ages<0){
            break;
        } 
        else{
            increase++;
            result+=ages*1.0;
        }
    }
    final_result = result/increase*1.0;
    printf("%.2f\n",final_result);
    return 0;
}