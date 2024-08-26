/*Write a C program to check whether a number is a prime, Armstrong, or Perfect number using functions.*/
#include<stdio.h>
#include<math.h>
int isPrime(int n){
  if(n<=1){
    return 0;
  }
  for(int i=2; i<n; i++){
    if(n%i==0){
      return 0;
    }
  }
  return 1;
}
int isArmstrong(int n){
  int original = n;
  int numOfDigits = 0;
  int sum = 0;
  int temp = n;
  // Determine the number of digits
    while (temp != 0) {
        temp /= 10;
        numOfDigits++;
    }
    temp = n;
  // Calculate the sum of digits raised to the power of numDigits
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, numOfDigits);
        temp /= 10;
    }
    if(sum == original){
      return 1;
    }
    return 0;
}
int isPerfect(int n){
  int sum = 0;
  for(int i=1; i<n; i++){
    if(n % i == 0){
      sum += i;
    }
  }
  if( sum == n){
    return 1;
  }
  return 0;
}
int main(){
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
  if(isArmstrong(num)){
    printf("%d is a armstrong number\n", num);
  } else {
    printf("%d is not a armstrong number\n", num);
  }
  if(isPerfect(num)){
    printf("%d is a perfect number\n", num);
  } else {
    printf("%d is not a perfect number\n", num);
  }

  return 0;
}
