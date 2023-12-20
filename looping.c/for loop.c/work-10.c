// print multification of n
#include <stdio.h>
int main()
{
    int i, n, table;
    printf("enter no :");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        table = n * i;
        printf("\n %d * %d = %d ", n, i, table);
    }

    return 0;
}