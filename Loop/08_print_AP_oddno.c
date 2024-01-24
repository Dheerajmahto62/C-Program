#include<stdio.h>
int main()
// {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=4;i<=3*n+1;i=i+3)
//     {
//         printf("%d ",i);
//     }
// }

//      wihout forumula
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int a=4;
    for(int i=1;i<=n;i++)
    {
        printf("%d ",a);
        a=a+3;
    }
}