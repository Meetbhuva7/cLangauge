#include <stdio.h>
int main()
{
    int a[20][20], m, n, i, j, sum = 0;
    float avr;
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

    printf("\n enter matrix.....\n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum=sum+a[i][j];
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
   

    // average find
    avr = (float)sum / (m * n);
    printf("all  element sum :: %d \n", sum);
    printf("all element average :: %.2f", avr);

    return 0;
}