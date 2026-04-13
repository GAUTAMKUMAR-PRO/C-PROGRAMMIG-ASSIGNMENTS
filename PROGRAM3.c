#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));

    if(arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    int sum = 0;
    for(int i=0; i<n; i++)
        sum += arr[i];

    float avg = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    free(arr);

    return 0;
}
