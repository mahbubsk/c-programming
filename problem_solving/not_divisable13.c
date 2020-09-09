#include <stdio.h>

int main()
{
    unsigned int first_input, last_input, i, temp;
    scanf("%d %d",&first_input, &last_input);
    if(first_input>last_input){
        temp = first_input;
        first_input = last_input;
        last_input = temp;
    }
    for(i=first_input+1; i<last_input; i++){
        if(i%5==2 || i%5==3){
            printf("%d\n",i);
        }
    }
    return 0;
}
