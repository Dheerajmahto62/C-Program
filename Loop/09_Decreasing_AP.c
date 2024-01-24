#include<stdio.h>
int main()
{
    // AP - 100 97 94.......
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int a = 100;
    //for(int i=1;a>0;i++)
    for(int i=1;i<=34;i++)
    {
        printf("%d ",a);
        //printf("%d ",i);
        a=a-3;
    }
}