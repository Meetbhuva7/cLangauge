#include <stdio.h>
int main()
{
    float unit, surcharge, bill; // 0-50     =  50*0.50   = 25
    printf("enter is bill :");   // 51-150   =  100*0.75  = 75
    scanf("%f", &unit);          // 151-250  =  100*1.20  = 120
                                 // >250     =  *1.50     =

    if (unit <= 50)
    {
        bill = unit * 0.50;
    }
    else if (unit >= 51 && unit <= 150)
    {
        bill = 25 + (unit - 50) * 0.75;
    }
    else if (unit >= 151 && unit <= 250)
    {
        bill = 25 + 75 + (unit - 150) * 1.2; // 100=(25+75)
    }
    else
    {
        bill = 25 + 75 + 120 + (unit - 250) * 1.5; // 220=(25+75+120)
    }

    printf("\n bill : %.2f", bill);

    surcharge = bill * 20 / 100;
    printf("\n surcharge : %.2f", surcharge);

    bill = surcharge + bill; // bill += surcharge
    printf("\n Total Bill Amount : %.2f", bill);

    return 0;
}