// Print the sum of this series:1-2+3-4+5-6..upto'n'.
//


#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    // 1-2+3-4+5-6+.... nterms
    //odd number -> add
    //Even number-> subtract
    int sum=0;
    //   1st method
    // for(int i=1;i<=n;i++)
    // {
    //     if(i%2!=0)
    //         sum = sum+i;
    //     else 
    //        sum=sum-i;
    // }

    // 2nd method
    
    if(n%2==0){
        sum=-n/2;
    }
    else{
        sum= -n/2 +n;
    }
    printf("The sum is : %d",sum);
}