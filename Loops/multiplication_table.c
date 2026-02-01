/*
Program: Multiplication Table
Author: Twinkle Gupta
Date: 01/02/2026
Description: This program displays the multiplication table of a number entered by the user.
*/
#include <stdio.h>
int main() 
{
  int x,n;
  
  printf("Enter a number: ");
  scanf("%d", &n);
  
  for(x=1;x<=10;x++) {
    printf("%d * %d = %d\n", n,x,n*x);
  }
  
  return 0;
}
