// print n to 1
#include <stdio.h>
int main()
{
    int i = 1, n;
    printf("enter no :");
    scanf("%d", &n);
    do
    {
        printf("%d \n", n);
        n--;

    } while (n >= 1);

    return 0;
}