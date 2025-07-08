#include<stdio.h>
//print the table of a number input by the user
int main(){
  int n;
  printf("enter n: ");
  scanf("%d",&n);
  for(int i=1;i<=10;i++) {
    printf("%d\n",n*i);
  }
  return 0;
}