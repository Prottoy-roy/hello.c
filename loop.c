#include<stdio.h>
//this is a program from to 0 to n
int main(){
  int n;
  printf("enter n: ");
  scanf("%d",&n);
  for(int i=1; i<=n;i++) {
    printf("%d \n",i);
  }
  return 0;
} 