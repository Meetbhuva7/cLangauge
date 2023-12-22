#include <stdio.h>>
int main()
{
    int number;
    printf("enter your number :");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("\n neutral number");
    }
    else if (number < 0)
    {
        printf("\n note using number");
    }
    else
    {
        printf("\n number is ziro");
    }
    return 0;
}