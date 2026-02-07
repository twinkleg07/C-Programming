/* 
Program : Array Input and Print
Author : Twinkle Gupta
Date : 07/02/2025
Description : This program takes array inputs from user and prints it.
*/
#include <stdio.h>
int main() {
  int i, n; 
  
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  
  int arr[n];
  
  printf("Enter %d elements: ", n);
  for(i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  
  printf("Array Elements are: \n");
  for(i = 0; i < n; i++){
    printf("%d ",arr[i]);
  }
  
  return 0;
}
