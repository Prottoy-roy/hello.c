//Print the factorial of a number n
//exmple:
//1!(factorial) = 1*1
//2!(factorial) = 1*2
//3!(factorial) = 1*2*3
#include <stdio.h>

int main() {
  int n;
  printf("enter n: ");
  scanf("%d",&n);
  int factorial=1;
  for(int i=1;i<=n;i++) {
    factorial = factorial*i;
  }
  printf("factorial number: %d",factorial);
  return 0;
}