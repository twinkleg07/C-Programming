/* Program: Print numbers from 1 to n
   Author: Twinkle Gupta
   Date: 01/02/2026
   Description: This program displays numbers from 1 up to the number entered by the user.
*/
#include <stdio.h>
int main() 
{
  int x,n;
  
  printf("Enter a number: ");
  scanf("%d", &n);
  
  for (x = 1 ; x <= n ; x++) {
    printf("%d\n", x); 
  }
  printf("\n");
  
  return 0;
}
