// Display this GP- 1,2,4,8,16,32... upto 'n'terms.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    // GP- 1 2 4 8 16 32 ......
    int a=1; // Extra variable
    for(int i=1;i<=n;i++)
    {
        printf("%d ",a);
        a=a*2;
    }
}