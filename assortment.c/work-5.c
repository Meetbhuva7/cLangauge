// matrix convert into transpose matrix
#include <stdio.h>
int main()
{
    int a[10][10], i, j, row, col, k[10][10];

    printf("enter size of row and colume::");
    scanf("%d %d", &row, &col);

    printf("enter elements of  metrix:");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n enterd element \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            k[i][j] = a[j][i];
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n transpose matrix \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", k[i][j]);
        }
        printf("\n");
    }

    return 0;
}