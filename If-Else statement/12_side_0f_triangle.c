#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the 1st side: ");
    scanf("%d", &a);
    printf("Enter the 2nd side: ");
    scanf("%d", &b);
    printf("Enter the 3rd side: ");
    scanf("%d", &c);
    if ((a + b) > c && (b + c) > a && (c + a) > b)
    {
        printf("valid trianle");
    }
    else
    {
        printf("Invilid triangle");
    }
}