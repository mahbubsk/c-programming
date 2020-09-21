#include <stdio.h>
int main()
{
    char name[] = 'JQK';
    char a_card = name[2];
    name[2] = name[1];
    name[1] = name[0];
    name[0] = name[2];
    name[2] = name[1];
    name[1] = a_name;
    printf(name);

    return 0;
}