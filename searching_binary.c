/*
Write a program to implement a Binary Search Algorithm.
*/

#include <stdio.h>

int BinarySearch(int arr[], int n, int se) {
    int start = 0;
    int end = n-1;
    while (start <= end) {
        int mid = (start+end)/2;
        if (arr[mid] == se){
            return mid;
        }
        if (arr[mid] > se) {
            end = mid-1;
        }
        else {
            start = mid + 1;
        }
    }
    return -1;
}

void main() {
    int arr[20], n, i, se;
    printf("Enter size of the array : ");
    scanf("%d", &n);
    printf("Enter elements of the Array : ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter Search Element : ");
    scanf("%d", &se);
    int index = BinarySearch(arr, n, se);
    if (index == -1){
        printf("Not Found\n");
    }
    else {
        printf("Found at index : %d\n", index);
    }
}
