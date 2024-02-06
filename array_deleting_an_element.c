//Write a program to delete an element from the array.

#include<stdio.h>

int main(){
    int n, i, arr[30], del, j;
    printf("Enter the Size of the Array : ");
    scanf("%d", &n);
    printf("Enter the elements of the Array : ");
    for (i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be deleted : ");
    scanf("%d", &del);
    for(i=0; i<n; i++){
        if (arr[i]==del){
            for(j=i; j<n; j++){
                arr[j]=arr[j+1];
            }
            n--;
            break;
        }
    }
    printf("Array after deletion : ");
    for (i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
