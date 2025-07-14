//write a program to n natural numbers
#include<stdio.h>

int sum(int a);

int main() {
  printf("sum is : %d ",sum(5));
  return 0;
}
int sum(int a) {
  if(a==1){
    return 1;
  }
  int sumA1 = sum(a-1);
  sumA1 = sumA1+a;
  return sumA1; 
}