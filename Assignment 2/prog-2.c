/*Write a C program to calculate the sum of the first 20 natural numbers using a recursive function.*/
#include<stdio.h>
int addNumbers(int n){
  if(n!=0){
    return n + addNumbers(n-1);
  }
  else return n;
}
int main(){
  int num;
  printf("Enter a positive integer:  ");
  scanf("%d", &num);
  printf("Sum of first %d natural numbers: %d\n", num, addNumbers(num));
  return 0;
}
