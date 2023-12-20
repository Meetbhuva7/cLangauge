// print odd no 1 to n
#include <stdio.h>
int main()
{
    int i = 1, n;
    printf("enter no :");
    scanf("%d", &n);
    // odd number
    do
    {
        if (n % 2 != 0)
        {
            printf("%d \n", n);
        }
        n--;

    } while (n >= i);

    return 0;
}