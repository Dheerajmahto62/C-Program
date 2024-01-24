#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the one number: ");
    scanf("%d", &a);
    printf("Enter the two number: ");
    scanf("%d", &b);
    printf("Enter the three number: ");
    scanf("%d", &c);
    if (a > b)
    {
        if (a > c)
            printf("%d ia greater", a);
        else   // a<c -> b<a<c
            printf("%d is greater", c);
    }
    else  // b>a 
    {
        if (b > c)
            printf("%d is greater", b);
        else  // c>b --> a<b<c
            printf("% is greatest", c);
    }
}