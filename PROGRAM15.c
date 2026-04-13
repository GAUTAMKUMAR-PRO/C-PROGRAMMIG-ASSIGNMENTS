#include <stdio.h>

void printArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int n, key, j;

    printf("Enter N: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("\nOriginal Array:\n");
    printArray(arr, n);

    for(int i=1; i<n; i++)
    {
        key = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;

        printf("After inserting element %d: ", key);
        printArray(arr, n);
    }

    return 0;
}
