// print leap year 2000 to 3000
#include <stdio.h>
int main()
{
    int i = 2000, sum = 0;

    for (int i = 2000; i <= 3000; i++)
    {

        if (i % 4 == 0)
        {
            printf("%d \n", i);
            sum++;
        }
    }

    printf(" year total %d \n", sum);

    return 0;
}