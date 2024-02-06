//Write a program to display all unique elements of an array.

#include<stdio.h>
void unique(int arr[], int n);

int main() {
    int arr[30], i, n;
    printf("Enter the size of the Array : ");
    scanf("%d", &n);
    printf("Enter the elements of the Array : ");
    for (i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    unique(arr, n);
    return 0;
}

void unique(int arr[], int n) {
    int i,j;
    printf("Unique elements in array is : ");
    for (i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(arr[i] == arr[j] && i!=j){
                break;
            }
        }
        if (j==n){
            printf("%d ", arr[i]);
        }
    }
}
