#include<stdio.h>
void greet()  // create function
// Void mean null/nothing return;
{
    printf("Good Morning\n");
    printf("How are you\n");
    return;
}
int main()
{
    greet();//function call
    greet();
    greet();
    return 0;
} 