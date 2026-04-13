#include <stdio.h>

int maximum(int arr[], int n)
{
    int max = arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

int minimum(int arr[], int n)
{
    int min = arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i] < min)
            min = arr[i];
    }
    return min;
}

int main()
{
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers:\n", n);

    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    int (*fp)(int[], int);

    fp = maximum;
    printf("Maximum = %d\n", fp(arr, n));

    fp = minimum;
    printf("Minimum = %d\n", fp(arr, n));

    return 0;
}
