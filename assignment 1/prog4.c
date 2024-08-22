
#include <stdio.h>
int main() {
    int n, i, j;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Prime numbers between 1 to %d are: ", n);
    // Loop through all numbers from 2 to n
    for (i = 2; i <= n; i++) {

        // Check if i is divisible by any number from 2 to i/2
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                break; // i is not a prime number, break the loop
            }
        }

        // If the loop completes without a break, j > i/2
        if (j > i / 2) {
            printf("%d, ", i); // Print the prime number
        }
    }

    return 0;
}
