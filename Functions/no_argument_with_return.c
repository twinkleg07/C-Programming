/*
Program : Function without arguments with return value
Author : Twinkle Gupta
Date : 10/02/2026
Description : This Program demonstrates a function in C that does not take arguments but returns a value.
*/
#include <stdio.h>
int getno() {
  int n;
  printf("Enter a Number: ");
  scanf("%d", &n);
  return n;
}
int main() {
  int value;
  value= getno();
  printf("Number received is %d\n", value);
  return 0;
}
