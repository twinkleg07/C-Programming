// Program: Simple Calculator
// Author: Twinkle Gupta
// Date: 01/02/2026
// Description: This program uses switch statement and operators to give simple calculations of 2 numbers(decimal,integers) .

#include <stdio.h>
int main() 
{
  float x,y;
  int choice;

  printf("Enter first number: ");
  scanf("%f", &x);

  printf("Enter second number: ");
    scanf("%f", &y);

  printf("Available Operators: \n");
  printf("1 Addition\n 2 Subtraction\n 3 Multiplication\n 4 Division\n");

  printf("Choose Operator(1-4): \n");
  scanf("%d", &choice);

  switch (choice) {
    case 1:
    printf("Addition= %.2f", x + y );
    break;
    
    case 2:
    printf("Subtraction= %.2f", x - y );
    break;
      
    case 3:
    printf("Multiplication= %.2f", x * y );
    break;
    
    case 4:
    if(y !=0) {
      printf("Division= %.2f", x / y );
    }
    else {
      printf("Error: Can't divide by zero");
    }
    break;
    
    default:
    printf("Invalid Operator");
    break;
}
  
return 0;
}
