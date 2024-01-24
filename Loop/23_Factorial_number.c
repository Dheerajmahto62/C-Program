// Print the factorial of a given number 'n'.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    // 5!= 5*4*3*2*1
    int factorial =1;
    for(int i=1;i<=n;i++)
    {
        factorial=factorial*i;
        printf("Factorial %d is : %d\n",i,factorial);
    }
}