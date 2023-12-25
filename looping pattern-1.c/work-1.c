#include <stdio.h>
int main()
{
    int k = 1;

    //--------------1-------------//
    for (int r = 1; r <= 5; r++)
    {
        for (int c = 5; c >= 1; c--)
        {
            if (c <= r)
            {
                printf("%d ", c);
            }
        }
        printf("\n");
    }

    printf("\n");

    // -----------2----------//
    for (int r = 5; r >= 1; r--)
    {
        for (int c = r; c <= 5; c++)
        {
            printf("%d ", c);
        }
        printf("\n");
    }

    printf("\n");

    // ---------------3-----------//
    for (int r = 5; r >= 1; r--)
    {
        for (int c = 5; c >= 1; c--)
        {
            if (c >= r)
            {
                printf("%d ", r);
            }
        }
        printf("\n");
    }

    printf("\n");

    // ----------4-----------//
    for (int r = 1; r <= 5; r++)
    {
        for (int c = 1; c <= 5; c++)
        {
            if (r <= c)
            {
                printf("%d ", c);
            }
        }
        printf("\n");
    }

    printf("\n");

    // -------------5-------------//
    for (int r = 1; r <= 5; r++)
    {
        for (int c = 1; c <= 5; c++)
        {
            if (c >= r)
            {
                printf("%d ", r);
            }
        }
        printf("\n");
    }

    printf("\n");

    // -----------6----------//
    for (int r = 5; r >= 1; r--)
    {
        for (int c = 1; c <= 5; c++)
        {
            if (c <= r)
            {
                if (c % 2 == 0)
                {
                    printf("0 ");
                }
                else
                {
                    printf("1 ");
                }
            }
        }
        printf("\n");
    }

    printf("\n");

    // --------------------7---------//
    for (char r = 'A'; r <= 'E'; r++)
    {
        for (char c = 'E'; c >= 'A'; c--)
        {
            if (c <= r)
            {
                printf("%c ", c);
            }
        }
        printf("\n");
    }

    printf("\n");

    // ------------8--------------- //
    for (int r = 1; r <= 5; r++)
    {
        for (int c = 1; c <= 5; c++)
        {
            if (c <= r)
            {
                printf("%d ", k);
                k++;
            }
        }
        printf("\n");
    }

    return 0;
}