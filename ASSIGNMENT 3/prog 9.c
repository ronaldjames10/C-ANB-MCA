//Write a program to search for a particular element in an array.
#include <stdio.h>
int main() {
    int n, searchElement, i,found = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &searchElement);
    for ( i = 0; i < n; i++) {
        if (arr[i] == searchElement) {
            printf("Element %d found at position %d.\n", searchElement, i + 1);
            found = 1;
            break; 
        }
    }
    if (!found) {
        printf("Element %d not found in the array.\n", searchElement);
    }

    return 0;
}

