#include <stdio.h>
int main()
{
    char string1[20], string2[20];
    int i;
    printf("enter a string: \n");
    printf("?");
    scanf("%s", &string2);
    for (i = 0; i < string2[i] != '\0'; i++)
    {
        string1[i] = string2[i];
    }
    string1[i] = '\0';
    printf("%s\n", string1);
    printf("number of character = %d", i);

    return 0;
}