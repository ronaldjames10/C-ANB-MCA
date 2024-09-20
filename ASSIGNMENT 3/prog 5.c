//Write a program to convert a decimal number taken as input from 
//a user to the corresponding binary number and store the result in an array.

#include <stdio.h>
int main() {
    int decimal, binary[32], index = 0,i;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    if (decimal == 0) {
        binary[index] = 0;
        index++;
    }
    while (decimal > 0) {
        binary[index] = decimal % 2; 
        decimal = decimal / 2;       
        index++;
    }
    printf("The binary equivalent is: ");
    for ( i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}

