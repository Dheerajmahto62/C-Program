#include<stdio.h>
int main()
{
    int x,y;
    printf("Enetr the coordinates: ");
    scanf("%d %d",&x,&y);
    if(x==0 &y==0)
    {
        printf("The point is origin");
    }
    else if(x==0)
    {
        printf("lies on y-axis.");
    }
    else if(y==0){
        printf("lies on x-axis.");
    }
    else{
        printf("The point is does not lie on x or y axis. and it is not origin");
    }
}