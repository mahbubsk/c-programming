#include <stdio.h>

int main(){
    int number[100];
    double input, result;
    int i;
    scanf("%lf",&input);
    for(i=0; i<100; i++){
        printf("number[%d] = %.4lf\n",i,input);
        input /= 2.0;
    }
    return 0;
}