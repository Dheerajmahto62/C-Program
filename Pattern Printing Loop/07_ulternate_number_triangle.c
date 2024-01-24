#include<stdio.h>
int main()
{
    int n;
    printf("Enter no of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i+=2)
    {
        //for(int j=1;j<=i;j+=2)  // triangle
        for(int j=1;j<=n+1-i;j+=2)//ulta triangle.
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}