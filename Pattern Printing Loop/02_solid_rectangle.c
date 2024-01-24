#include<stdio.h>
int main()
{
    int n ;
    printf("Enter no of rows and column: ");
    scanf("%d ",&n);
    // printf("Enter no of column: ");
    // scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
