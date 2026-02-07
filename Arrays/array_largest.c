/* 
Program : Largest Number using Array
Author : Twinkle Gupta
Date : 07/02/2026
Description : This program takes array elements from user and displays the largest among them.
*/
#include <stdio.h>
int main() {
  int n,i; 
  
  printf("Enter number of elements: ");
  scanf("%d", &n);
  
  int arr[n];
  
  printf("Enter %d elements : ", n);
  
  for(i=0; i<n; i++) {
    scanf("%d", &arr[i]);
  }
  
  int max = arr[0];
  
  for(i=0;i<n;i++) {
    if(arr[i]> max) {
      max = arr[i];
    }
  }
  
  printf("Largest number is %d \n", max);
  
  return 0;
}
