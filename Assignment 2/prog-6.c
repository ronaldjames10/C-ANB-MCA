/*Write a C program to read an integer number and print the reverse of that number using recursion.*/
#include<stdio.h>
int revOfNum(int n){
  if(n!=0){
    printf("%d", n%10);
    return revOfNum(n/10);
  }
  else return 0;
}
int main(){
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("Reverse of %d is ", num);
  revOfNum(num);
  printf("\n");
  return 0;
}