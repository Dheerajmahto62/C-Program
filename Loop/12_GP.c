// Display this GP- 100,50,25... upto 'n'terms.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    float a=100;
    for(int i=1;i<=5;i++)
    {
        printf("%f ",a);
        a=a*(1/2);
    }
}

// not complete