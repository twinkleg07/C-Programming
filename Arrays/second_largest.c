/* 
Program : Second largest in an array
Author : Twinkle Gupta
Date: 08/02/2026
Description : This program finds the second largest array element entered by user.
*/
#include <stdio.h>
int main() {
  int i,n;

  printf("Enter number of elements: ");
  scanf("%d",&n);
  
  if(n < 2) {
    printf("Second largest is not possible.");
    return 0;
  }
  
  int arr[n];
  
  printf("Enter %d elements: ", n);
  for(i = 0; i < n; i++) {
    scanf("%d",&arr[i]);
  }
  
  int largest =arr[0];
  int second = arr[0];
  
  for(i = 1; i < n; i++) {
    if(arr[i] > largest) {
      second = largest;
      largest = arr[i];
    }
    else if(arr[i] < largest && arr[i] > second) {
      second =arr[i];
    }
  }
  
  printf("Second Largest number is %d ", second);
  
  return 0;
}
