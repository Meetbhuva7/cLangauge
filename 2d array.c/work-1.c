#include <stdio.h>
int main()
{
    int a[20][20], m, n, i, j;
    printf("\n enter size of row and colum:");
    scanf("%d %d", &m, &n);

    printf("\n enter matrix::\n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d ", &a[i][j]);
        }
    }

    printf("\n enter matrix.....\n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}