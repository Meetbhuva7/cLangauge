// strlrn, strrev, strcpy, strupr, strlwr ,strcmp, strcat

#include <stdio.h>
#include <string.h>
int main()
{
    char str[20], str2;
    printf("\n enter name:");
    gets(str);

    printf("\n name is:");
    puts(str);

    printf("\n length of string is %d", strlen(str));
    printf("\n upper of string is %s", strupr(str));
    printf("\n lawer of string is %s", strlwr(str));

    strcpy(str, str2);
    printf("\n after copy string is %s", str2);

    strcat(str, "welcome");
    printf("\n after merge string is %s", str);

    printf("\n reverse of string is %s", strrev(str));

    return 0;
}