/*
Program : Sum of Numbers using Array
Author : Twinkle Gupta
Date : 07/02/2026
Description : This Program Takes Array input from user and gives their sum as output.
*/
#include <stdio.h>
int main() {
  int i, n, sum = 0;
  
  printf("Enter number of elements: ");
  scanf("%d", &n);
  
  int arr[n];
  
  printf("Enter Array Elements: \n");
  for(i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  
for(i = 0; i < n; i++) {
  sum = sum + arr[i];
}
  
printf("Sum of Array elements: %d \n", sum);
  
return 0;
}
