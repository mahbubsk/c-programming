#include <stdio.h>

int main()
{
    int x,y,i,result = 0;
    scanf("%d %d",&x,&y);
    for(i=x; i<=y; i++){
        if(i%13==0){
            continue;
        } else{
            result += i;
        }
    }
    printf("%d\n",result);
    return 0;
}
