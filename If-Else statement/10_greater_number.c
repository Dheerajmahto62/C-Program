#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the number: ");
    scanf("%d", &a);
    printf("Enter the again number: ");
    scanf("%d", &b);
    printf("Enter the agian number: ");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("%d is greater", a);
    }
    if (b > a && b > c)
    {
        printf("%d is greater", b);
    }
    if (c > a && c > b)
    {
        printf("%d is greater", c);
    }
}