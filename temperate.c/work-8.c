// print num is prime or no
#include <stdio.h>
int main()
{
    int i, n, count;
    printf("enter no :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {

        if (n % i == 0)
        {
            count++;
        }
    }
    if (count <= 2)
    {
        printf("It is prime number");
    }
    else
    {
        printf("It is  not prime number");
    }

   return 0;
}