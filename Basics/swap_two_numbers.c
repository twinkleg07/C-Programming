/*Purpose: A Program to swap two numbers given by user.
  Author: Twinkle Gupta
  Date: 31/01/2026 */
#include <stdio.h>
int main()
{
  int x,y,z;
  
  //Input two numbers
  printf("Enter two numbers to swap:");
  scanf("%d %d", &x, &y);
  
  //Display numbers before swapping
  printf("First number before swapping: %d, Second number before swapping:  %d\n",x,y);
  
 //swap using a temporary variable
  z=x;
  x=y;
  y=z;
  
  //Display numbers after swapping
  printf("First number after swapping: %d, Second number after swapping: %d\n", x,y);
  
  return 0;
}
