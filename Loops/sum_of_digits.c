/*
Program: Sum of digits
Author: Twinkle Gupta
Date: 03/02/2026
Description: This program give the sum of digits of number entered by user.
*/

#include <stdio.h>
int main() {
  int n, x, sum=0;
  
  printf("Enter a number: \n");
  scanf("%d", &n);
  
  while(n != 0){
    x = n % 10;
    sum =sum + x;
    n = n / 10;
  }
  
  printf("Sum of digits of number= %d\n", sum);
  
  return 0;
}
