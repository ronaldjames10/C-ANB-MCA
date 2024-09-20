//3.	Write a program to insert an element in an array in a particular position.
#include <stdio.h>

int main() {
    int n, pos, element,i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n+1];  

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position where you want to insert the element (1 to %d): ", n+1);
    scanf("%d", &pos);
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    if (pos < 1 || pos > n+1) {
        printf("Invalid position! Please enter position between 1 and %d\n", n+1);
    } else {
        for ( i = n; i >= pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos - 1] = element;
        n++;
        printf("Array after insertion:\n");
        for ( i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}

