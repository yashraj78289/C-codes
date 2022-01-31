/*Simple program to check spaces in a string entered by the user*/
#include <stdio.h>

void countSpaces(char *str)
{
    int spaces;
    for (spaces=0;*str;str++)
    {
        if(*str!=' ') continue;

        spaces++;
    }
    printf("%d spaces in the string\n",spaces);
}

int main(void)
{
    char s[100],*str;
    printf("Enter a string");
    gets(s);
    str=s;

    countSpaces(str);
    return 0;
}