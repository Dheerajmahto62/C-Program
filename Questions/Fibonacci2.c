#include <stdio.h>
int main()
{

    int n, n1 = 0, n2 = 1;

    int fib = n1 + n2;
    printf("Enter the Number: ");
    scanf("%d", &n);

    printf("fibonacci series is: %d %d", n1,n2);
    for (int i = 3; i <= n; ++i)
    {
        printf(" %d ", fib);
        n1 = n2;
        n2 = fib;
        fib = n1 + n2;
    }
    
}