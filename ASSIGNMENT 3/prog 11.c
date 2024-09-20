//Write a program to find second second-highest number from the array without using sorting.
#include <stdio.h>
int main() {
    int n,i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    if (n < 2) {
        printf("Array should have at least two elements.\n");
        return 1;
    }
    int arr[n];
    printf("Enter the elements of the array:\n");
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int highest = arr[0];
    int second_highest = -2147483648; // Minimum possible value for an integer
    for ( i = 1; i < n; i++) {
        if (arr[i] > highest) {
            second_highest = highest;
            highest = arr[i];
        } else if (arr[i] > second_highest && arr[i] < highest) {
            second_highest = arr[i];
        }
    }
    if (second_highest == -2147483648) {
        printf("There is no distinct second-highest number in the array.\n");
    } else {
        printf("The second-highest number is: %d\n", second_highest);
    }

    return 0;
}

