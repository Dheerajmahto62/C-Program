#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	int r=0;
	int sum=0;
	while (n>0)
	{
		r=r*10;
		r=r+(n%10);
		n=n/10;
		sum = sum+r;
		//printf("Reverse number is : %d \n", r);
	}
	//sum = n+r;
	printf("Reverse number is:%d\n", r);
	printf("Total numar is   :%d", sum);
}

