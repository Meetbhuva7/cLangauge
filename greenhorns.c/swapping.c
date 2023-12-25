#include <stdio.h>
int main()
{
    int a, b, c;
    printf("before swapping a and b :");
    scanf("%d %d", &a, &b);
    printf(" \n before swapping  a :%d", a);
    printf(" \n before swapping  b :%d", b);
    printf("\n \n");

    c = a;
    a = b;
    b = c;
    printf(" \n after swaping  a :%d", a);
    printf("\n after swaping b :%d", b);

    return 0;
}