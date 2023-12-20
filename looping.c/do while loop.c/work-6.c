// print even no n to 1
#include <stdio.h>
int main()
{
    int i = 1, n;
    printf("enter no :");
    scanf("%d", &n);
    // even number
    do
    {
        if (i % 2 == 0)
        {
            printf("%d \n", i);
        }
        i++;

    } while (i <= n);

    return 0;
}