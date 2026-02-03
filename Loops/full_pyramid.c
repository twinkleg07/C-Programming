/*
Program : Full Pyramid
Author : Twinkle Gupta
Date : 03/02/2026
Description : This program displays pyramid pattern by taking input from user. 
*/
#include <stdio.h>
int main()
{
  int i, j, n; 
  
  printf("Enter a number: \n");
  scanf("%d", &n);
  
  for(i = 1; i <= n; i++) {
    for(j = 1; j <= n - i; j++){
      printf(" ");
    }
    for(j = 1; j <= i; j++) {
      printf("* ");
    }
    printf("\n");
  }
  
  return 0;
}
