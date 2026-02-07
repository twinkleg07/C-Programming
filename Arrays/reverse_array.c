/* 
Program : Reverse an Array
Author : Twinkle Gupta
Date : 07/02/2026
Description : This Program takes Array elements from user and reverses the elements.
*/
#include <stdio.h>
int main() {
  int i,n;
  
  printf("Enter number of elements: ");
  scanf("%d", &n);
  
  int arr[n];
  
  printf("Enter %d elements: ", n);
  
  for(i=0;i<n;i++) {
    scanf("%d", &arr[i]);
  }
  
  printf("Reversed Array: \n");
  
  for(i=n-1;i>=0;i--) {
    printf("%d ", arr[i]);
  }
  
  return 0;
}
