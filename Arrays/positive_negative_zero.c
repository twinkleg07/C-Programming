/* 
Program : Positive, Negative or Zero using Array
Author : Twinkle Gupta
Date : 07/02/2026
Description : This Program takes array elements from user and displays number of positive, negative and zeros in it.
*/
#include <stdio.h>
int main() {
    int i,n;
    int pos=0, neg=0, zero=0;
  
    printf("Enter number of elements: ");
    scanf("%d", &n);
  
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }
    
    for(i=0;i<n;i++) {
        if(arr[i]>0) {
            pos++;
        }
        else if(arr[i]<0) {
            neg++;
        }
        else {
            zero++;
        }
    
    }
    printf("Positive = %d\n", pos);
    printf("Negative = %d\n", neg);
    printf("Zero = %d\n", zero);
    
    return 0;
}
