/*Write a C program to find the sum of the digits of the number using a recursive function.*/
#include<stdio.h>
int sumOfDigits(int n){
  if(n != 0){
    return (n%10 + sumOfDigits(n/10));
  }
  else return 0;
} 
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("Sum of digits of %d is %d\n", n, sumOfDigits(n));
  return 0;
}