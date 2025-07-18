#include <stdio.h>
#include <math.h>
int main()
{
  float pi = 3.14, circle, radius; //define values
  printf("Enter rad value: ");
  scanf("%f",&radius);
  radius = pow(radius,2);
  circle = 2*pi*radius;
  printf("The area of a circle is:%f",circle);
  return 0;
}