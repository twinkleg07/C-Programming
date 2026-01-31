/* Purpose: To check if the given number is even or odd.
Author: Twinkle Gupta
Date: 31/01/2026 */
#include <stdio.h>
int main() {
  int x;
  
  //Input number
  printf("Enter a number:");
  scanf("%d", &x);
  
  //Check even or odd
  if(x%2==0) {
    printf("%d is an even number", x);
  }  
  else{
    printf("%d is a odd number", x);
  } 

  return 0;
}
