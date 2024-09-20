//Write a program to input a binary number in an array and convert it into a corresponding decimal number.
#include <stdio.h>
#include <math.h>
int main() {
    int n, decimal = 0,i;
    printf("Enter the number of bits in the binary number: ");
    scanf("%d", &n);
    int binary[n];
    printf("Enter the binary number (bit by bit):\n");
    for ( i = 0; i < n; i++) {
        scanf("%d", &binary[i]);
        if (binary[i] != 0 && binary[i] != 1) {
            printf("Invalid input! Please enter 0 or 1 only.\n");
            return 1;  
        }
    }
    for ( i = 0; i < n; i++) {
        decimal += binary[i] * pow(2, n - 1 - i);  // Calculate decimal value
    }
    printf("The decimal equivalent is: %d\n", decimal);

    return 0;
}

