// swap two numbers using pointers
#include <stdio.h>

void swap(int *x, int *y);

void main()
{
    int a, b;
    printf("enter two number: ");
    scanf("%d %d", &a, &b);

    printf("\n before value:");
    printf("\n a is = %d", a);
    printf("\n b is = %d \n", b);

    swap(&a, &b);

    printf("\n after value:");
    printf("\n a is = %d", a);
    printf("\n b is = %d", b);

    return 0;
}

void swap(int *x, int *y)
{
    int z;
    z = *x;
    *x = *y;
    *y = z;
}
