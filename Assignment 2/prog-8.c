/*Write a C program to check whether a number is even or odd using functions*/
#include<stdio.h>
int check(int n){
  return n%2 == 0? 1: 0;
}
int main(){
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  if(check(num)){
    printf("%d is Even\n", num);
  }
  else printf("%d is Odd\n", num);
  return 0;
}