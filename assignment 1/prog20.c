// Write a C program to input any character and check whether it is an alphabet, digit, or special character. 
#include <stdio.h>
int main() {
  char c;
  printf("Enter a character: ");
  scanf("%c", &c);
  if((c>='a' && c<='z') || (c>='A' && c<='Z')){
    printf("%c is an alphabet\n", c);
  }
  else if(c>='0' && c<='9'){
    printf("%c is a digit\n", c);
  }
  else{
    printf("%c is a special character\n", c);
  }
  return 0;
}