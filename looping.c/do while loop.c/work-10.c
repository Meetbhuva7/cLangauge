// print multification of n
#include <stdio.h>
int main()
{
    int i = 1, n, table;
    printf("enter no :");
    scanf("%d", &n);
    do
    {
        table = n * i;

        printf("\n %d * %d = %d ", n, i, table);
        i++;

    } while (i <= 10);

    return 0;
}
