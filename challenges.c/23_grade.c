#include <stdio.h>

int main() {
  int n;
  printf("enter n (0-100):");
  scanf("%d",&n);
  if(n>=90 && n<=100){
    printf("A\n");
  }
  else if(n>=75 && n<=90){
    printf("B\n");
  }
  else if(n>=60 && n<=75){
    printf("C\n");
  }
  else if(n>=30 && n<=60){
    printf("D\n");
  }
  else if(n>=0 && n<=30){
    printf("F\n");
  }else {
    printf("Not the right number\n");
  }
  printf("Thank you\n");
  return 0;
}