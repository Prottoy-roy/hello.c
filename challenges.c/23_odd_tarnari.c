#include <stdio.h>

int main ()
{
  int n;
  printf("enter:");
  scanf(" %d",&n);

  n%2==0?printf("even\n"):printf("odd\n");
  
  return 0;
}