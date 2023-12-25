#include <stdio.h>
int main()
{
    float c, f;
    printf("enter celsius");
    scanf("%f", &c);

    f = (c * 9 / 5) + 32;
    printf("fahrenheit velue :%.2f", f);

    return 0;
}