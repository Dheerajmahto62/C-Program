#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n % 5 == 0)
    {
        if (n % 3 == 0)
        {
            printf("Dvision by 5 and 3");
        }
        else
        {
            printf("Not Division by 5and 3");
        }
    }
    else
    {
        printf("Not Division by 5and 3");
    }
}