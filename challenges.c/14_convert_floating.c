#include <stdio.h>

int num(int a);

int main ()
{
  float a;
  printf("enter a:");
  scanf("%f",&a);
  printf("floating num is: %f\n",a);
  num(a);
  return 0;
}

int num(int a)
{
  printf("intiger num is: %d\n",a);
  return a;
}
//print a intiger number and a floating number