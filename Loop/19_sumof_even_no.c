// WAP to print sum of all the even digits of a given number.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int sum = 0;
    int lastDigit = 1;
    while (n!= 0)
    {
        lastDigit = n % 10;
        sum = sum + lastDigit;
        n = n/10;
    }
    printf("The sum of digits is %d",sum);
}