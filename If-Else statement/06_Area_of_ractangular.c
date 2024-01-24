#include<stdio.h>
int main()
{
    int length,breadth,area,perimeter;
    printf("Enetr the length: ");
    scanf("%d",&length);
    printf("Enter the breadth: ");
    scanf("%d",&breadth);
    area = length*breadth;
    perimeter= 2*(length+breadth);
    if(area>perimeter)
    {
        printf("AOR is greater than perimeter");
    }
    else{
        printf("AOR is not greater than perimeter");
    }
}