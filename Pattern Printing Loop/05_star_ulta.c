#include<stdio.h>
int main()
{
    int N;
    printf("Enter no of rows: ");
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=N+1-i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}