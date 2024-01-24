#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n%5==0 || n%3==0)
    {
        printf("Division by 5 or 3.");
    }
    else
    {
        printf("Not Division by 5 or 3.");
    }
    
}