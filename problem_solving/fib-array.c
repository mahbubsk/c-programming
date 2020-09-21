#include<stdio.h>

int main(){
    int input,i, j;
    long long fib[60], input2;
    long long  a=0, b=1, c=0;
    

    scanf("%d",&input);

    for(i=0; i<input; i++){
        scanf("%lld",&input2);
        for(j=0; j<=input2; j++){
            a=b;
            b=c;
            c=a+b;
        }
        printf("Fib(%lld) = %lld\n",input2,b);
        a=0;
        b=1;
        c=0;
        
    }
    return 0;
}