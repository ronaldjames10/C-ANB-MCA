// Write a C program to find the maximum between three numbers.
#include <stdio.h>
int main() {
  printf("Enter first number: ");
  int a;
  scanf("%d",&a);
  printf("Enter second number: ");
  int b;
  scanf("%d",&b);
  printf("Enter third number: ");
  int c;
  scanf("%d",&c);
  if(a>b && a>c){
    printf("%d is maximum\n", a);
  }
  else if(b>a && b>c){
    printf("%d is maximum\n", b);
  }
  else{
    printf("%d is maximum\n", c);
  }
    return 0;
}