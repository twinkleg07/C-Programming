/*
Program : Armstrong Number
Author : Twinkle Gupta
Date : 03/02/2026
Purpose : This program takes input number from user and checks if it's armstrong number or not
*/
#include <stdio.h>
int main() {
  int x, ori, n, sum=0;
  
  printf("Enter a number: \n");
  scanf("%d", &n);
  
  ori = n;
  
  while(n != 0) {
    x = n%10;
    sum= sum+(x*x*x);
    n=n/10;
  }
  
  if(ori==sum){
    printf("It is an Armstrong Number.\n");
  }
    
  else {
    printf("It is not an armstrong number.\n");
  }
  
  return 0;
}
