// print n to 1
#include <stdio.h>
int main()
{
    int i = 1, n;
    printf("enter no :");
    scanf("%d", &n);

    for (int i = 1; n >= i; n--)
    {
        printf("%d \n", n);
    }

    return 0;
}