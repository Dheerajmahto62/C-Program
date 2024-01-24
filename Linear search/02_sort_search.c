#include<stdio.h>

int binarySearch(int arr[], int n , int key)
{
    int low, mid, high;
    low = 0;
    high = n-1;

    whlie(low<=high)
    {
        mid = (low+high)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        if(arr[mid]<key)
        {
            low = mid+1;
        }
        else{
            high = mid-1;
        }
        
    }
    return -1;
}
int main()
{
    int arr[]= {4,2,50,23,28,13,40,66,72,100};
    int key = 66;
    int n = sizeof(arr)/sizeof(int);
    int searchIndex = binarySearch(arr, n,key);
    print("The element %d was found at Index %d\n", key, searchIndex);
    return 0;
}
