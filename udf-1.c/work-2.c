//a given nunmber is divisible by 3 & 5
#include <stdio.h>
int main()
{
    int number;
    printf("enetr no : ");
    scanf("%d", &number);
    if (number % 3 == 0 && number % 5 == 0)
    {
        printf("number is divisible by 3 & 5 ");
    }
    else
    {
        printf("number is not divisible by 3 & 5 ");
    }

    return 0;
}