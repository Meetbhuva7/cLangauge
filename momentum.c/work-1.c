#include <stdio.h>
int main()
{
    char no;
    printf("enter no :");
    scanf("%c", &no);

    if ((no >= 'a' && no <= 'z') || (no >= 'A' && no <= 'Z'))
    {
        printf("no is alphabet");
    }
    else if (no >= '0' && no <= '9')
    {
        printf("no is digit");
    }
    else
    {
        printf("no is special character");
    }

    return 0;
}