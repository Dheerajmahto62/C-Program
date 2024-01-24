#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter base nnumber: ");
    scanf("%d",&a);
    printf("Enter power nnumber: ");
    scanf("%d",&b);
    int power=1;
    for(int i=1;i<=b;i++)
    {
        power=power*b;
        printf("%d raised to the power %d is %d\n",a,b,power);
    }
    printf("%d raised to the power %d is %d",a,b,power);
}