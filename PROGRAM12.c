#include <stdio.h>

int main()
{
    int n, key;
    int low, high, mid;

    printf("Enter N: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d sorted elements (ascending order):\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter value to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        printf("Low=%d  Mid=%d  High=%d  (arr[mid]=%d)\n", low, mid, high, arr[mid]);

        if(arr[mid] == key)
        {
            printf("Element found at position %d (Index %d)\n", mid + 1, mid);
            return 0;
        }
        else if(key < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    printf("Element not found!\n");

    return 0;
}
