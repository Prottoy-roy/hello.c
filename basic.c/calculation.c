#include<stdio.h>
//calculate the sum of all the numbers between 5 to 50
int main() {
  int sum = 0;
  for(int i=5;i<=50;i++) {
    sum += i;
  }
  printf("%d",sum);
  return 0;
}