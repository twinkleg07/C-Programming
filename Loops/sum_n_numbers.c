/*
Program: Sum of Numbers from 1 to n
Author: Twinkle Gupta
Date:01/02/2026
Description: This program shows sum of all the numbers from 1 to n entered by the user.
*/

#include <stdio.h>
int main() 
{
  int x, n, sum=0 ;
  
  printf("Enter a number: ");
  scanf("%d",&n);

  for(x=1;x<=n;x++) {
    sum+=x;
  }
  
  printf("Sum of first %d numbers are %d\n", n, sum);
  return 0;
}
