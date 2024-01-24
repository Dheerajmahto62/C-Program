#include<stdio.h>

int main()
{
    int cp,sp;
    printf("Enter the cp value :");
    scanf("%d",&cp);
    printf("Enter the sp value :");
    scanf("%d",&sp);
    if(cp<sp)
    {
        printf("Profit");
    }
    // if(cp==sp)
    // {
    //     printf("No Profit and Loss");
    // }
    else
    {
        printf("loss");
    }
}