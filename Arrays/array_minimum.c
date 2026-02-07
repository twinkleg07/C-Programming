/* 
Program : Minimum Value Using Array
Author : Twinkle Gupta
Date : 07/02/2026
Description : This Program takes array elements from users and displays minimum among them.
*/
#include <stdio.h>
int main() {
  int i,n;
  
  printf("Enter number of elements: ");
  scanf("%d", &n);
  
  int arr[n];
  
  printf("Enter %d elements: ", n);
  
  for(i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  
  int min = arr[0]; 
  
  for(i = 1; i < n; i++) {
    if(arr[i]<min) {
      min= arr[i];
    }
  }
  
  printf("Minimum value is %d \n", min);
  
  return 0;
}
