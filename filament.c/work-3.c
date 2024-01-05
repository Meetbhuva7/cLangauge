#include <stdio.h>
#include <string.h>
int main()
{
    char str[50], s1[20], rep_char, new_char;
    int i;

    printf("enter name::");
    gets(str);

    printf("\n name is:");
    puts(str);

    printf("\n enter charecter you want to replace:");
    fflush(stdin);
    scanf("%c",&rep_char);

    printf("\n enter new charcter you want to add::");
    fflush(stdin);  
    scanf("%c",&new_char);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == rep_char)
        {
            str[i] = new_char;
        }
    }

    printf("\n after replace  name is::");
    puts(str);

    return 0;
}