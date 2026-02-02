/* 
Program : Check if Number is Prime or Not
Author : Twinkle Gupta
Date : 02/02/2026
Description : This program checks if input number given by user is prime or not.
*/
#include <stdio.h>
int main() 
{
  int n, x, flag=0;
  
  printf("Enter a number: ");
  scanf("%d", &n);
  
  if(n<=1) {
    printf("It is not a prime number\n");
    return 0;
  }
  
  for(x = 2; x <= n/2; x++) {
    if(n%x==0) {
      flag=1;
      break;
    }
  }
  
  if(flag==0) {
    printf("It is a prime number.\n");
  }
    
  else {
    printf("It is not a prime number.\n");
  }
  return 0;
}
