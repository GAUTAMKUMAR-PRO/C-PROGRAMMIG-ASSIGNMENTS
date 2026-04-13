#include <stdio.h>

int main()
{
    int n, key, pos = -1;
    int comparisons = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter value to search: ");
    scanf("%d", &key);

    for(int i = 0; i < n; i++)
    {
        comparisons++;

        if(arr[i] == key)
        {
            pos = i;
            break;
        }
    }

    if(pos != -1)
        printf("Element found at position %d (Index %d)\n", pos + 1, pos);
    else
        printf("Element not found!\n");

    printf("Total comparisons = %d\n", comparisons);

    return 0;
}
