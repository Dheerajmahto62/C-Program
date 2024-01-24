#include<stdio.h>
int main()
{
    int n;
    printf("Enetr the number : ");
    scanf("%d",&n);
    int fact=1;
    int i=1;
    while(i<=n)
    {
        fact=fact*i;
        i++;
        //printf("The factorial number is : %d\n",fact);
    }
    printf("The factorial number is : %d",fact);

}