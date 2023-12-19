//find the factorial of n using
#include<stdio.h>
int main(){
    int i=1,n,mult=1;
    printf("\n enter input number.");
    scanf("%d",&n);
    while (i<=n)
    {
        mult*=i;
        i++;
    }
    printf("%d \n",mult);

    return 0;
}