//anti-diagonal sum
#include <stdio.h>
int main()
{
    int a[20][20], m, n, i, j, sum = 0;
    printf("\n enter size of row and colum:");
    scanf("%d %d", &m, &n);

    printf("\n enter element::\n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d ", &a[i][j]);
        }
    }

    printf("2d array matrix ::\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i+j == 2)
            {
                sum = sum + a[i][j];
            }

            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    // anti-diagonal sum of array
    printf("anti-diagonal sum element %d \n", sum);

    return 0;
}