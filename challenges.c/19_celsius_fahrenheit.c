#include <stdio.h>
//fahrenheit celsius to convert
int main ()
{
  float celsius,fahrenheit;
  printf("enter fahrenheit:");
  scanf("%f",&fahrenheit);
  celsius = (fahrenheit-32) * 5 / 9;
  printf("fahrenheit is:%.2f",celsius);
  return 0;
}