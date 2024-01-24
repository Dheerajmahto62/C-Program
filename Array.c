#include<stdio.h>
int min()
{
    int marks[3];
    printf("Enter the Phy  :-");
    scanf("%d",&marks[0]);

printf("Enter the chem  :-");
scanf("%d",&marks[1]);

printf("Enter the math  :-");
scanf("%d",&marks[2]);
printf("phy=%d , chem=%d, math=%d", marks[0], marks[1]);
 return 0;
}