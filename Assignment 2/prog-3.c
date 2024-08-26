/*Write a C program to generate a Fibonacci series using a recursive function.*/
#include<stdio.h>
void fibonacci(int n){
  static int n1 = 0, n2 = 1, n3;
  if(n > 0){
    n3 = n1 + n2;
    n1 = n2;
    n2 = n3;
    printf("%d \n ", n3);
    fibonacci(n-1);
  }
}
int main(){
  int n;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  printf(" 0 \n 1 \n ");
  fibonacci(n-2);
  return 0;
}