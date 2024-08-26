/*Write a C program to add, subtract, multiply and divide two integers using a user-defined type function with a return type.
*/
#include<stdio.h>
int add(int a, int b){
  return a+b;
}
int subtract(int a, int b){
  return a-b;
}
int multiply(int a, int b){
  return a*b;
}
float divide(float a, float b){
  if(b==0){
    printf("Division by zero is not possible\n");
  }
  else{
    return a/b;
  }
  return 0;
}

int main(){
  printf("Enter two numbers: ");
  int a,b;
  scanf("%d %d", &a, &b);
  printf("Sum: %d\n", add(a,b));
  printf("Difference: %d\n", subtract(a,b));
  printf("Product: %d\n", multiply(a,b));
  printf("Quotient: %f\n", divide(a,b));
  return 0;
}