#include <stdio.h>

int main()
{
    int i, j, k;

    // 1
    for (i = 1; i <= 5; i++)
    {
        for (k = 5; k >= i; k--)
        {
            printf(" ");
        }
        for (j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n");

    // 2
    for (i = 5; i >= 1; i--)
    {
        for (k = i; k >= 1; k--)
        {
            printf(" ");
        }
        for (j = i; j <= 5; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n");

    // 3
    for (i = 5; i >= 1; i--)
    {
        for (k = i; k >= 1; k--)
        {
            printf(" ");
        }
        for (j = i; j <= 5; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    printf("\n");

    // 4
    for (i = 5; i >= 1; i--)
    {
        for (k = 5; k >= i; k--)
        {
            printf(" ");
        }
        for (j = i; j >= 1; j--)
        {
            if (j % 2 == 0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
        printf("\n");
    }

    printf("\n");

    // 5
    for (i = 5; i >= 1; i--)
    {
        for (k = 5; k >= i; k--)
        {
            printf(" ");
        }
        for (j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n");

    // 6
    for (i = 1; i <= 5; i++)
    {
        for (k = i; k >= 1; k--)
        {
            printf(" ");
        }
        for (j = 5; j >= i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n");

    // 7
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" %d", j);
        }
        for (k = 4; k >= i; k--)
        {
            printf("  ");
        }
        for (k = i; k <= 4; k++)
        {
            printf("  ");
        }
        for (j = i; j >= 1; j--)
        {
            printf(" %d", j);
        }
        printf("\n");
    }

    printf("\n");

    // 8
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" %d", j);
        }
        for (k = 4; k >= i; k--)
        {
            printf("  ");
        }
        for (k = i; k <= 4; k++)
        {
            printf("  ");
        }
        for (j = i; j >= 1; j--)
        {
            printf(" %d", j);
        }
        printf("\n");
    }
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" %d", j);
        }
        for (k = 4; k >= i; k--)
        {
            printf("  ");
        }
        for (k = i; k <= 4; k++)
        {
            printf("  ");
        }
        for (j = i; j >= 1; j--)
        {
            printf(" %d", j);
        }
        printf("\n");
    }

    printf("\n");

    // 9
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" %d", j);
        }
        printf("\n");
    }
    for (i = 2; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" %d", j);
        }
        printf("\n");
    }

    printf("\n");

    // 10
    for (i = 1; i <= 5; i++)
    {
        for (k = 5; k >= i; k--)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            printf(" %d", j);
        }
        for (j = i - 1; j > 0; j--)
        {
            printf(" %d", j);
        }
        printf("\n");
    }

    printf("\n");

    // 11
    for (i = 1; i <= 5; i++)
    {
        for (k = 5; k >= i; k--)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            printf(" *");
        }
        for (j = i - 1; j > 0; j--)
        {
            printf(" *");
        }
        printf("\n");
    }

    return 0;
}