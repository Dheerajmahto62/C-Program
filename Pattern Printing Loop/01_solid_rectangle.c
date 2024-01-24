// Print the given pattern
//  *****
//  *****
//  *****

#include<stdio.h>
int main()
{
    int n , m;
    printf("Enter number of rows:");
    scanf("%d",&n);
    printf("Enter number of column:");
    scanf("%d",&m);
    for(int i=1;i<=n;i++)// outer loop-> no of lines/rows.
    {
        for(int j=1;j<=m;j++)// inner loop -> no of star/column.
        {
            printf("*");
        }
        printf("\n");//every lines are break.
    }
}