//Write a program for deleting duplicate elements in an array.
#include <stdio.h>
int main() {
    int n,i,j,k;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int new_n = n; 
    for (i = 0; i < new_n; i++) {
        for (j = i + 1; j < new_n; j++) {
            if (arr[i] == arr[j]) {
                for ( k = j; k < new_n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                new_n--;  
                j--;      
            }   } }
    printf("Array after removing duplicates:\n");
    for ( i = 0; i < new_n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

