#include <stdio.h>
int main()
{
    int a, b;
    printf("enter a&b :");
    scanf("%d %d", &a, &b);

    // ternary oerator using minimum two velu
    
    (a < b) ? printf("a is minimum") : printf("b is minimum");

    return 0;
}