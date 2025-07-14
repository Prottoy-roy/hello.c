//write a program to factorial n number.
#include <stdio.h>

int fact(int n);

int main() {
  printf("the factorial number is: %d",fact(5));
  return 0;
}

int fact(int n) {
  if(n==1) {
    return 1;
  }
  int factNm = fact(n-1);
  int fact =factNm * n;
  return fact;  
}