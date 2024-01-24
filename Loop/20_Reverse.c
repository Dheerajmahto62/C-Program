// WAp to print reverse of a given number.
//   r=r*10;   r=0     n=12345
//   r=r+(n%10);
//   n=n/10;

#include<stdio.h>
int main()
{
  int n;
  printf("Enter the number: ");
  scanf("%d",&n);
  int r=0;
  while(n>0)
  {
    r=r*10;
    r=r+(n%10);
    n=n/10;
  }
  printf("The reverse No: %d",r);
}