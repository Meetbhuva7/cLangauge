#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    printf("enter a&b&c&d&e :");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    // ternary oerator using maxmum five velue

    (a > b) ? (a > c)   ? (a > d) ? (a > e) ? printf("a is max") : printf("e is max") : (d > e) ? printf("d is max")
                                                                                                : printf("e is max")
                : (c > d) ? (c > e) ? printf("c is max") : printf("e is max")
                : (d > e) ? printf("d is max")
                        : printf("e is max")
    :

    (b > c)   ? (b > d) ? (b > e) ? printf("b is max") : printf("e is max") : (d > e) ? printf("d is max")
                                                                                      : printf("e is max")
      : (c > d) ? (c > e) ? printf("c is max") : printf("e is max")
      : (d > e) ? printf("d is max")
              : printf("e is max");

    return 0;
}