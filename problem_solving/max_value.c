#include <stdio.h>

int main()
{
    int i,store[10],max;
    
    for(i = 0; i<10; i++){
        
        scanf("%d",&store[i]);
        if (store[i] < store[i+1])
        {
            max = store[i+1];
        }
        
    }
    
    printf("max = %d\n",max);
    return 0;
}