#include <stdio.h>
int fac(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return num * fac(num - 1);
    }
}
int main()
{
    int n;
    printf("Enetr the number: ");
    scanf("%d", &n);

    int result = fac(n);
    printf("Factroial number is : %d", result);
    return 0;
}