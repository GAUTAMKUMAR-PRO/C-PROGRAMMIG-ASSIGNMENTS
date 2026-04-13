#include <stdio.h>

void printArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int n, temp;

    printf("Enter N: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("\nOriginal Array:\n");
    printArray(arr, n);

    for(int gap = n/2; gap > 0; gap = gap/2)
    {
        for(int i = gap; i < n; i++)
        {
            temp = arr[i];
            int j;

            for(j = i; j >= gap && arr[j-gap] > temp; j = j-gap)
            {
                arr[j] = arr[j-gap];
            }

            arr[j] = temp;
        }

        printf("Gap = %d : ", gap);
        printArray(arr, n);
    }

    printf("\nSorted Array:\n");
    printArray(arr, n);

    return 0;
}
