#include <stdio.h>

int main()
{
    char name[40];
    
    fgets(name,40,stdin);
    printf("my name is %s\n",name);

    

    return 0;
}
