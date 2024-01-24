#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("It is even number");
    }
    if(n%2!=0)
    {
        printf("Its is Odd no.");
    }
    // else{
    //     printf("Its is odd number");
    // }
    return 0;

}