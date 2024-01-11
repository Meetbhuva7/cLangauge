// name lengh find
#include <stdio.h>
int namecount(char name[20]);

void main()
{
    int a[20], n;
    printf("enter name :");
    scanf("%s", n);
    printf("name count is %d", namecount(a[20]));
}

int namecount(char name[20])
{
    int count = 0, i;
    for (i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}