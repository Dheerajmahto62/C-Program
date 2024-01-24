#include<stdio.h>
// Global declear variable:
int linearSearch(int a[], int size , int element)
{
    for(int i=0; i<size; i++)
    {
        if(a[i] == element)
        return i;
    }
    return -1;
}
int main()
{
    int a[] = { 23,4,56,7,56,44,24,76 ,86};
    int size = sizeof(a)/sizeof(int);
    int element = 44;
    int searchIndex = linearSearch(a, size,element); 
    printf("the element%d was found at Index %d \n", element, searchIndex);
    return 0;
}
