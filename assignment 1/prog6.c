// Write a C program to evaluate the algebraic expression (ax+b)/(ax-b).
#include <stdio.h>
int main() {
    int a, b, x;
    float result;
    printf("Enter the values of a, b and x: ");
    scanf("%d %d %d", &a, &b, &x);
    result = (a * x + b) / (a * x - b);
    printf("Result = %.2f", result);
    return 0;
}
