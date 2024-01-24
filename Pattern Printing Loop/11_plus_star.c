#include<stdio.h>
int main()
{
    int n;
    printf("Enter no of rows: ");
    scanf("%d",&n);
    // printf("Enter no of column: ");
    // scanf("%d",&m);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            int a=n/2+1;
            if(j==a || i==a)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
}