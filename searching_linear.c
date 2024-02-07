/*
1. Write a program to implement a Linear Search Algorithm.
*/

#include <stdio.h>

int LinearSearch(int arr[], int n, int se) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == se) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[20], m, i, se;
    printf("Enter size of the array : ");
    scanf("%d", &m);
    printf("Enter elements of the Array : ");
    for(i=0; i<m; i++){
        scanf("%d", &arr[i]);
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Enter Search Element : ");
    scanf("%d", &se);
    int index = LinearSearch(arr, n, se);
    if (index == -1) {
        printf("Not Found\n");
    } else {
        printf("Found at index: %d\n", index);
    }

    return 0;
}
