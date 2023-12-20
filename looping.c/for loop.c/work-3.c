// print 1 to n
#include <stdio.h>
int main()
{
    int i = 1, n;
    printf("enter no :");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d \n", i);
    }

    return 0;
}