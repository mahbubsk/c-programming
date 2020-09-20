#include<stdio.h>

int main(){
    int fib[60];
    int i, j;
    int input;

    scanf("%d",&input);

    for(i=0; i<input; i++){
        scanf("%d",&fib[i]);
    }

    for(i=0; i<input; i++){
        printf("fib(%d) = %d\n",i,fib[i]);
    }
    return 0;
}