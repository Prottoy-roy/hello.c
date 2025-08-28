#include <stdio.h>
int main ()
{
  int a = 2,b = 3,sum;
  sum = a + b - a * b % a / b;
  printf("The sum is: %d",sum);
  return 0;
}