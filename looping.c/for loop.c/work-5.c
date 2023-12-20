// print odd no 1 to n
#include <stdio.h>
int main()
{
    int i = 1, n;
    printf("enter no :");
    scanf("%d", &n);
    // odd number 1 to n

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d \n", i);
        }
    }
    return 0;
}