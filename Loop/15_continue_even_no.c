//Wap to print all the even number from 1 to 100 by using continue statement.
#include<stdio.h>
int main()
{
    for(int i=1;i<=100;i++)
    {
        if(i%2!=0)
        {
            continue;
        }
        printf("%d ",i);
    }
}


