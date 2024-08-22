#include<stdio.h>
int main()
{
    // Write a C program to find the sum of individual digits of a given positive integer. 
    int n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    while(n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    printf("Sum of digits = %d\n", sum);
    return 0;
}