/*
 * C Program to Perform Binary Search using Recursion
 */

#include <stdio.h>

void binary_search(int [], int, int, int);
void bubble_sort(int [], int);

int main()
{
    int se, n, i;
    int arr[25];

    printf("Enter size of a array: ");
    scanf("%d", &n);
    printf("Enter elements\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    bubble_sort(arr, n);
    printf("\nSorted Array : \n");
    for(i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    printf("\nEnter element to search : ");
    scanf("%d", &se);
    binary_search(arr, 0, n, se);

}

void bubble_sort(int list[], int size)
{
    int temp, i, j;
    for (i = 0; i < size; i++)
    {
        for (j = i; j < size; j++)
        {
            if (list[i] > list[j])
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }
}

void binary_search(int list[], int lo, int hi, int key)
{
    int mid;

    if (lo > hi)
    {
        printf("Key not found\n");
        return;
    }
    mid = (lo + hi) / 2;
    if (list[mid] == key)
    {
        printf("Key found at index : %d\n", mid);
    }
    else if (list[mid] > key)
    {
        binary_search(list, lo, mid - 1, key);
    }
    else if (list[mid] < key)
    {
        binary_search(list, mid + 1, hi, key);
    }
}
