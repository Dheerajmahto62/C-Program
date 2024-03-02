#include <stdio.h>

int main()
{

    int arr[] = {3, 6, 4, 0, 4, 6, 3};

    int n = sizeof(arr) / sizeof(arr[0]);

    int temp = 0;
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] == arr[n - i - 1])
        {
            temp = 1;
            break;
        }
    }
    if (temp == 1)
    {
        printf("It is a palindrom Number\n");
    }
    else
    {
        printf("It is not Palindrom Number");
    }
    
}