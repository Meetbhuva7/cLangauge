// print sum 1 to n
#include <stdio.h>
int main()
{
    int i = 1, n, sum = 0;
    printf("enter no :");
    scanf("%d", &n);
    // number sum
    do
    {
        printf("\n %d", i);
        sum = i + sum;
        i++;

    } while (i <= n);
    printf("\n sum is %d ", sum);

    return 0;
}