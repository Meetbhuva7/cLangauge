#include <stdio.h>
int main()
{

    int r, c, k = 11, l;

    // 1
    for (r = 41; r <= 45; r++)
    {
        for (c = 41; c <= 45; c++)
        {
            if (c <= r)
            {
                printf("%d ", c);
            }
        }
        printf("\n");
    }

    printf("\n");

    // 2
    for (r = 1; r <= 5; r++)
    {
        for (c = 1; c <= 5; c++)
        {
            if (c <= r)
            {
                printf("%d ", k);
                k++;
            }
        }
        printf("\n");
    }

    printf("\n");

    // 3
    for (r = 5; r >= 1; r--)
    {
        for (c = r; c >= 1; c--)
        {
            printf(" ");
        }
        for (int j = r; j <= 5; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n");

    // 4
    for (r = 5; r >= 1; r--)
    {
        for (c = 5; c >= r; c--)
        {
            printf(" ");
        }
        for (int j = r; j >= 1; j--)
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
    for (r = 1; r <= 5; r++)
    {
        for (c = 1; c <= r; c++)
        {
            printf(" %d", c);
        }
        for (l = 4; l >= r; l--)
        {
            printf("  ");
        }
        for (l = r; l <= 4; l++)
        {
            printf("  ");
        }

        for (c = r; c >= 1; c--)
        {
            printf(" %d", c);
        }
        printf("\n");
    }

    printf("\n");

    // 6
    for (r = 5; r >= 1; r--)
    {
        for (l = 1; l <= r; l++)
        {
            printf("  ");
        }
        for (c = r; c <= 5; c++)
        {
            printf(" %d", c);
        }
        for (c = 5 - 1; c >= r; c--)
        {
            printf(" %d", c);
        }
        printf("\n");
    }

    printf("\n");

    // 7
    for (r = 1; r <= 5; r++)
    {
        if (r == 1 || r == 3)
        {
            printf("* * * * *");
        }
        else
        {
            printf("*       *");
        }
        printf("\n");
    }

    return 0;
}