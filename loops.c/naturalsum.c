#include<stdio.h>
//this is a program sum of first natural numbers
//print them reverse
int main(){
  int n;
  printf("enter n:");
  scanf("%d",&n);
  int sum=0;
  for(int i=n;i>=1;i--) {
    sum =sum+i;
    printf("%d \n",i);
  }
  printf("natural number is: %d \n",sum);
  return 0;
}