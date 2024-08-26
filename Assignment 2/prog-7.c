/*Using functions, write a C program to find the maximum and minimum between two numbers.*/
#include<stdio.h>
int max(int a, int b){
  return a>b?a:b;
}
int min(int a, int b){
  return a<b?a:b;
}
int main(){
  int a, b;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  printf("Maximum: %d\nMinimum: %d\n", max(a, b), min(a, b));
  return 0;
}