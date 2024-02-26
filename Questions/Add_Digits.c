#include <stdio.h>

int main()
{

    int num, sum = 0, rem;

    printf("Enter the no: ");
    scanf("%d", &num);

    while (num > 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num /= 10;

    }
    printf("Sum of digit No is: %d", sum);
    return 0;
}