// print sum 1 to n
#include <stdio.h>
int main()
{
    int i = 1, n, sum = 0;
    printf("enter no :");
    scanf("%d", &n);
    // number sum 1 to n

    for (int i = 1; i <= n; i++)
    {

        printf("%d \n", i);
        sum = sum + i;
    }
    printf("\n sum is %d ", sum);

    return 0;
}