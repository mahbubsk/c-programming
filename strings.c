#include <stdio.h>
int main()
{
    char name[10];
    int i = 0;
    fgets(name, 30, stdin);
    printf("%s", name);

    return 0;
}