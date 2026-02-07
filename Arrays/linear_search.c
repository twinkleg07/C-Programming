/* 
Program : Linear Search in Array
Author : Twinkle Gupta
Date : 07/02/2026
Description :This program helps the user find the index of an element in the array.
*/
#include <stdio.h>
int main() {
  int i, n, key;
  int found=0;
  
  printf("Enter number of elements: ");
  scanf("%d", &n);
  
  int arr[n];
  
  printf("Enter %d elements: ", n);
  
  for(i=0;i<n;i++) {
    scanf("%d",&arr[i]);
  }
  
  printf("Enter element to search: ");
  scanf("%d", &key);
  
  for(i=0; i<n;i++) {
    if(arr[i]==key) {
      found= 1;
      break;
    }
  }
  
  if(found== 1) {
   printf("Element found in index %d ",i);
  }
    
  else {
   printf("Element Not Found. ");
  }
  
  return 0;
}
