#include <stdio.h>

int calls = 0;

int binarySearch(int arr[], int low, int high, int key)
{
    calls++;

    if(low <= high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] == key)
            return mid;
        else if(key < arr[mid])
            return binarySearch(arr, low, mid - 1, key);
        else
            return binarySearch(arr, mid + 1, high, key);
    }

    return -1;
}

int main()
{
    int n, key;

    printf("Enter N: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d sorted elements (ascending):\n", n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    int result = binarySearch(arr, 0, n-1, key);

    if(result != -1)
        printf("Element found at position %d (Index %d)\n", result+1, result);
    else
        printf("Element not found!\n");

    printf("Total recursive calls = %d\n", calls);

    return 0;
}
