#include <stdio.h>
int main()
{
    char line[81], character;
    int c = 0;
    printf("Enter text. press <return> at end\n");
    do
    {
        character = getchar();
        line[c++] = character;
    } while (character != '\n');
    c -= 1;
    line[c] = '/0';
    printf("\n%s\n", line);
    return 0;
}