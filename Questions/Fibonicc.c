#include <stdio.h>

int fib(int num)
{

    if (num == 0 || num == 1)
    {
        return num;
    }
    else
    {
        int result = fib(num - 1) + fib(num - 2);
        return result;
    }
}

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    int result1 = fib(n);
    printf("Fibonacci is : %d ", result1);
    return 0;
}