#include <stdio.h>

int main()
{
    int arr[] = {2, 4, 4, 5, 5, 6, 8, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Duplicate value is: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("%d ", arr[i]);
            }
        }
    }
    return 0;
}