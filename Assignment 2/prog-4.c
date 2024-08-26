/*Write a C program to swap two integers using call-by-value and call-by-reference methods of passing arguments to a function.*/
#include<stdio.h>
void swapByValue(int a, int b){
  int temp = a;
  a = b;
  b = temp;
  printf("After swapping by value: a = %d, b = %d\n", a, b);
}
void swapByReference(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
  printf("After swapping by reference: a = %d, b = %d\n", *a, *b);

}
int main(){
  printf("Enter two numbers: ");
  int a,b;
  scanf("%d %d", &a, &b);
  printf("Before swapping: a = %d, b = %d\n", a, b);
  swapByValue(a,b);
  swapByReference(&a, &b);
  return 0;
}