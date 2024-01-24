#include<stdio.h>
int main()
{
    int n;
    printf("Enter no of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a=1;
        //for(int j=1;j<=i;j++)
        for(int j=1;j<=n+1-i;j++)
        {
            //ulternet number abd alphabat print.
            if(i%2==0)
            {
                int d=a+64;
                char ch =(char)d;
                printf("%c",ch);
                a++;
            }
            //if(i%2!=0)  // OR
            else
            {
                printf("%d",j);
            }

        }
        printf("\n");
    }
}