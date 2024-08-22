//Write a program to convert temperatures in Celsius to Fahrenheit and vice-versa.
#include <stdio.h>
int main() {
    float temp, convertedTemp;
    int choice;

    // Display the menu to the user
    printf("Temperature Conversion Menu:\n");
    printf("1. Convert Celsius to Fahrenheit\n");
    printf("2. Convert Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Celsius to Fahrenheit conversion
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        convertedTemp = (temp * 9/5) + 32;
        printf("%.2f Celsius is equal to %.2f Fahrenheit.\n", temp, convertedTemp);
    } else if (choice == 2) {
        // Fahrenheit to Celsius conversion
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        convertedTemp = (temp - 32) * 5/9;
        printf("%.2f Fahrenheit is equal to %.2f Celsius.\n", temp, convertedTemp);
    } else {
        // Invalid choice
        printf("Invalid choice! Please run the program again and select 1 or 2.\n");
    }

    return 0;
}
