#include<stdio.h>
int main()
{
    int n;
    printf("Enetr no of rows: ");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++)
    {
        //int a=1;
        for(int j=1;j<=i;j++)
        {
            printf("%d ",a);
            a++;
            //a+=2; // ulternate print.
        }
        printf("\n");
    }
}