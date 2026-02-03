/*
Program : Palindrome number
Author : Twinkle Gupta
Date : 03/02/2026
Description : This Program Checks if Number Given by User is a Palindrome or not
*/

#include <stdio.h>
int main() {
  int x,n,ori,rev=0;
  
  //Input by user
  printf("Enter a number: \n");
  scanf("%d", &n);
  
  ori=n;

  //If input is negative.
  if(n < 0) {
    printf("Negative number can't be palindrome.\n");
    return 0;
  }
  
  //Reversed Value
  while(n != 0){
    x= n%10;
    rev= rev*10+x;
    n= n/10;
  }
  
  //Comparision of the original value
  if(ori==rev){
    printf("It is a Palindrome.\n");
  }
    
  else{
    printf("It is not a Palindrome.\n");
  }
  
  return 0;
}
