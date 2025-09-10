//write a program to calculate the sum , product & average of two numbers .print them in the main function.
#include<stdio.h>

void doWork(int a,int b,int*sum,int*prod,int*avg);

int main(){
  int a=3,b=6;
  int sum,prod,avg;
  doWork(a,b,&sum,&prod,&avg);
  printf("sum=%d\nprod=%d\navg=%d\n",sum,prod,avg);
  return 0;
}

void doWork(int a,int b,int*sum,int*prod,int*avg){
  *sum = a+b;
  *prod = a*b;
  *avg = (a+b)/2;
}