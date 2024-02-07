#include <stdio.h>

void insertionSort(int arr[], int n)
{
    int i, j, key;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int n, i, arr[20];
    printf("Enter size of the array : ");
    scanf("%d", &n);
    printf("Enter elements of the Array : ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Array before sorting: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    insertionSort(arr, n);
    printf("Array after sorting: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
