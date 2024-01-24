#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter the one number: ");
    scanf("%d", &a);
    printf("Enter the two number: ");
    scanf("%d", &b);
    printf("Enter the three number: ");
    scanf("%d", &c);
    printf("Enter the four number: ");
    scanf("%d", &d);
    if (a > b && a > c && a > d)
    {
        printf("%d is greater", a);
    }
    if (b > a && b > c && b > d)
    {
        printf("%d is greater", b);
    }
    if (c > a && c > b && c > d)
    {
        printf("%d is greater", c);
    }
    if (d > a && d > b && d > c)
    {
        printf("%d is greater", d);
    }
}