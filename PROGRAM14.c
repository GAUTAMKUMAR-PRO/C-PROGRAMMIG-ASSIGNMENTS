#include <stdio.h>

int main()
{
    int n, temp, minIndex;

    printf("Enter N: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nOriginal Array:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    for(int i = 0; i < n - 1; i++)
    {
        minIndex = i;

        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }

        printf("Pass %d: Minimum element selected = %d\n", i + 1, arr[minIndex]);

        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;

        printf("Array after Pass %d: ", i + 1);
        for(int k = 0; k < n; k++)
            printf("%d ", arr[k]);
        printf("\n");
    }

    return 0;
}
