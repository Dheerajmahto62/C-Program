#include<stdio.h>
int reverse(int num){
    int rem, reverse=0;
    
    while(num>0){
        rem= num%10;
        reverse = reverse*10 + rem;
        num/=10;
    }
    return reverse;
}
int main(){
    int n ;
    printf("Enter the Number: ");
    scanf("%d" , &n);
    
    printf("Reverse no is: %d " , reverse(n));
    return 0;
}