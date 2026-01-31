/* Purpose:To find the largest of three numbers entered by the user
   Author : Twinkle Gupta
   Date   : 31/01/2026 */
#include <stdio.h>
int main() 
{
  int x,y,z;
  
  // Ask the user to enter three numbers
  printf("Enter three numbers to find largest number: ");
  scanf("%d %d %d", &x, &y, &z);
  
  // Check if all three numbers are equal
  if(x==y && y==z) { 
    printf("Three numbers are equal\n");
  }
    
  // Check if x is the largest
  else if(x>=y && x>=z) {
    // Additional check if x is equal to any other number
    if(x==y||x==z) {
      printf("%d is the largest number.\n", x); }
    else {
      printf("%d is the largest number.\n", x); }
  }
    
  // Check if y is the largest
  else if(y>=x && y>=z) {
    // Additional check if y is equal to any other number
    if(y==x||y==z){
      printf("%d is the largest number.\n", y); }
    else{
      printf("%d is the largest number.\n", y); }
  }
    
  // Check if z is the largest
  else if(z>=x && z>=y) {
    // Additional check if z is equal to any other number
    if(z==x||z==y){
      printf("%d is the largest number.\n", z); }
    else{
      printf("%d is the largest number.\n", z); }
 }
  
 return 0;
}
