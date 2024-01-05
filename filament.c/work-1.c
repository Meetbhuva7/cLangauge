#include <stdio.h>
#include <string.h>
int main()
{
    char name[50], name1[50];
    int ans;

    printf("enter name:");
    gets(name);

    strcpy(name1, name);

    printf("\n name is %s", name);
    printf("\n name is %s", name1);

    strrev(name);
    printf("\n name is %s", name);

    ans = strcmp(name,name1);


    if (ans == 0)
    {
        printf("\n string is palindrom::");
    }
    else
    {
        printf("\n string is not palindrom::");
    }
    return 0;
}