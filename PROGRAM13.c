#include <stdio.h>

int main()
{
    int n, temp;

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
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

        printf("After Pass %d: ", i + 1);
        for(int k = 0; k < n; k++)
            printf("%d ", arr[k]);

        printf("\n");
    }

    return 0;
}
