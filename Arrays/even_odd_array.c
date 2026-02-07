/* 
Program : Count Even and Odd Numbers in an Array
Author : Twinkle Gupta
Date: 07/02/2026
Description : This program takes array elements from user and displays number of even and odd elements.
*/
#include <stdio.h>
int main() {
  int i,n;
  int even=0, odd=0;
  
  printf("Enter number of elements: ");
  scanf("%d", &n);
  
  int arr[n];
  
  printf("Enter %d elements: ", n);
  
  for(i=0; i<n; i++) {
    scanf("%d", &arr[i]);
  }
  
  for(i=0; i<n; i++) {
    if(arr[i]%2==0) {
      even++;
    }
    else {
      odd++;
    }
  }
  
  printf("Even numbers= %d\n",even);
  printf("Odd numbers= %d\n", odd);
  
  return 0;
}
