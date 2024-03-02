#include <stdio.h>

int main()
{

    int arr[] = {2, 4, 4, 5, 5, 6, 8, 8, 8, 8, 8, 10, 10, 14};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Swapping the number

    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    printf("Reverse array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}