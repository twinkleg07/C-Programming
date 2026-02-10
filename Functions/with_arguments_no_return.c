/*
Program : Function with arguments and without return value
Author : Twinkle Gupta 
Date : 10/02/2026
Description : This Program demonstrates a function in c that takes arguments but does not return any value.
*/
#include <stdio.h>
void printno( int n ) {
  printf("Number recieved is %d\n", n);
}

int main() {
  printno( 10 );
  printno(60);
  return 0;
}
