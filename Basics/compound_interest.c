// Program: Compound Interest Calculator
// Author: Twinkle Gupta
// Date: 01/02/2026
// Description: This program calculates Compound Interest and Total Amount by taking input from user.

#include <stdio.h>
#include <math.h>
int main() 
{
  float pa, rate, t, am, ci;
  
  printf("Enter Principal Amount: ");
  scanf("%f", &pa);
  
  printf("Enter Time (in years): ");
  scanf("%f", &t);
  
  printf("Enter Rate of Interest: ");
  scanf("%f", &rate);
  
  am = pa*pow((1+rate/100), t);
  ci = am-pa;
  
  printf("Compound Interest= %.2f\n", ci);
  
  printf("Total Amount= %.2f\n", am);

  return 0;
}
