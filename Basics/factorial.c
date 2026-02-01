// Program: Factorial of Numbers
// Author: Twinkle Gupta
// Date: 01/02/2026
// Description: This C program takes a number from user and gives it's factorial

#include <stdio.h>
int main() {
  int num, i;
  unsigned long long fact=1;         //factorial can become very large
  
  printf("Enter a number:");
  scanf("%d", &num);

  if(num<0) {
    printf("Negative numbers don't have a factorial.");
  }
    
  else {
    for(i=1; i<=num; i++) {
      fact *= i;
    }
    printf("Factorial of %d is %llu\n", num, fact);
  }
  
  return 0;
}
