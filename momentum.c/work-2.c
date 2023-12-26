#include <stdio.h>
int main()
{
    int s;
    printf("enter is no :");
    scanf("%d", &s);

    // ternary operator thi max velue
    (s % 2 == 0) ? printf("number is a even") : printf("number is a odd");

    return 0;
}