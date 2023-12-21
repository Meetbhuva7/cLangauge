// print  count number of digits
#include <stdio.h>
int main()
{
    int r, n, count = 0, sum = 0;
    printf("enter no:");
    scanf("%d", &n);
    while (n > 0) //534>0 53>0 5>0
    {
        r = n % 10; //534%10 = 4 53%10 =3 5%10 = 5
        n = n / 10; //534/10 =53 53/10 = 5 5/10 = 0
        sum = sum + r;
        count++;
    }
    printf("\n total digit = %d", count);
    printf("\n sum of digit= %d", sum);

    return 0;
}