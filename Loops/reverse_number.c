/*
Program : Reverse of a Number
Author : Twinkle Gupta
Date : 02/02/2026
Description : This program takes input from user in form of number and reverses it using while loop.
*/
#include <stdio.h>
int main()
{
  int n, x, rev=0, num;

  printf("Enter a number: ");
  scanf("%d", &n);
   num=n;                              //stores original value to use later
  while(num != 0) {                    //Program runs until it reaches 0
    x = num % 10;                     //gives last digit of number
    rev = rev * 10 + x;               //reverses number
    num = num / 10;                   //removes last digit
  }
  
  printf("Reverse of %d = %d\n",n, rev);
  
  return 0;
}
