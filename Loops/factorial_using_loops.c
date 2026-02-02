/* 
Program: Factorial Program
Author: Twinkle Gupta
Date: 02/02/2026
Description: This program calculates factorial value of number given by user.
*/

#include <stdio.h>
int main()
{
  int n, x;
  unsigned long long fact = 1;   //factorial can be large
  
  //Take User Input
  printf("Enter a number: ");
  scanf("%d", &n);
  
  if(n >= 0) {
    for(x=1;x<=n;x++) {
      fact *= x;
    }
    printf("Factorial of %d = %llu\n", n, fact);
  }
    
  else {
    printf("Invalid: Try again with positive values.\n");
  }
  
  return 0;
}
