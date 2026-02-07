/* 
Program : Check if Array is Sorted or not
Author : Twinkle Gupta
Date : 08/02/2026
Description : This Program checks if the array entered by the user is sorted or not.
*/
#include <stdio.h>
int main() {
  int i,n;
  int sorted=1;
  
  printf("Enter number of elements: ");
  scanf("%d", &n);
  
  int arr[n];
  
  printf("Enter %d elements: ", n);
  
  for(i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  
  for(i = 0; i < n-1; i++) {
    if(arr[i] > arr[i+1]) {
      sorted= 0;
      break;
    }
  }
  
  if(sorted == 1) {
    printf("Array is Sorted.\n");
  }
    
  else {
    printf("Array is not Sorted.\n");
  }
  
  return 0;
}
