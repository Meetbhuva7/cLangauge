//  print its reverse & check weather num is palindrome or not

//  palindrome no : 121 = 121
// 3 =30
// 5 30+5 = 35*10 = 350
// 1 
// 351

#include <stdio.h>
int main()
{
    int r, n, rev = 0, f;
    printf("enter no:");
    scanf("%d", &n);
    f = n;
    while (n > 0)
    {
        r = n % 10;
        rev = (rev * 10) + r;
        n = n / 10;
    }
    printf("\n reverse no is %d", rev);
    if (f == rev)
    {
        printf("\n it is palindrom");
    }
    else
    {
        printf("\n it is not palindrom");
    }
    return 0;
}