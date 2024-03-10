/*
2. Write the program to implement the Quick Sort Algorithm.
*/

#include <stdio.h>

int split(int *a, int low, int high)
{
    int PivotValue = a[low];
    int i = low + 1;
    int j = high;
    while (1)
    {
        while (i < high && a[i] < PivotValue)
        {
            i++;
        }
        while (a[j] > PivotValue)
        {
            j--;
        }
        if (i < j)
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
        else
        {
            break;
        }
    }
    int temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;
}

void QuickSort(int *a, int low, int high)
{
    if (low < high)
    {
        int p = split(a, low, high);
        QuickSort(a, low, p - 1);
        QuickSort(a, p + 1, high);
    }
}

int main()
{
    int arr[20], n, i, se;
    printf("Enter size of the array : ");
    scanf("%d", &n);
    printf("Enter elements of the Array : ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int low = 0;
    int high = n - 1;
    printf("Array before Sorting : ");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    QuickSort(arr, low, high);
    printf("\nSorted array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
