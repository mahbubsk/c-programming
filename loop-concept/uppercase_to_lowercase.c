#include <stdio.h>
int main(void)
{
    char name[30];
    int i = 0;
    printf("enter a string: ");
    fgets(name, 30, stdin);
    while (name[i])
    {
        if (name[i] >= 'A' && name[i] <= 'Z')
        {
            name[i] = name[i] + 32;
        }
        i++;
    }
    printf("output: %s", name);
    return 0;
}