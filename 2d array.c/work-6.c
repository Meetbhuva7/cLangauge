// coloum wise sum array
#include <stdio.h>
int main()
{
    int a[20][20], i, j, m, n, sum = 0; // coloum wise sum  array

    printf("enter size of row and colum array :");
    scanf("%d %d", &m, &n);

    printf("enter element : \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("2d array matrix ::\n");
    for (i = 0; i < m; i++)
    {
        sum = 0;
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
            sum = sum + a[j][i];
        }
        printf(" all coloum element sum:: %d \n", sum);
    }

    return 0;
}