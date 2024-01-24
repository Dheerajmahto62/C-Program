#include<stdio.h>

int main()
{
    int n;
    printf("Enter the Number: ");
    scanf("%d",&n);
    if(n%5==0)
    {
        printf("Division by 5");
    }
    else{
        printf("Not Division by 5");
    }
}