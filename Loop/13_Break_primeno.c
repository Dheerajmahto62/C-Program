// WAP to check if a number is prime or not.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int a = 0;
    for(int i= 2;i<=n-1;i++)
    {
        if(n%i==0)
        {
        a= 1;
        break;
        }
    }
    if(n==1)
        printf("1 is neither prime or composite.");
    else if(a==0)
    {
        printf("The number is prime\n");
    }
    else{
        printf("The number is composite\n");
    }

}