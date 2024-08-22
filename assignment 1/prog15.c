// Write a C program to check whether a number is divisible by 5 and 11 or not within the range of 100 to 500.
#include <stdio.h>
int main() {
  int n;
  printf("Enter an integer: ");
  scanf("%d", &n);
  if(n>=100 && n<=500){
    if(n%5==0 && n%11==0){
      printf("%d is divisible by 5 and 11\n", n);
    }
    else{
      printf("%d is not divisible by 5 and 11\n", n);
    }
  }
  else{
    printf("Number is not in range\n");
  }
  return 0;
}