// print factorial of n
#include <stdio.h>
int main()
{
    int i = 1, n, mult = 1;
    printf("enter no :");
    scanf("%d", &n);
    do
    {
        printf("\n %d", i);
        mult = mult * i;
        i++;

    } while (i <= n);
    printf("\n sum is %d ", mult);

    return 0;
}