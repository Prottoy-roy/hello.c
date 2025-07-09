#include<stdio.h>
#include<conio.h>
int main() {
  int num[10],i;
  num[0]=0;
  num[1]=1;
  printf("%d,%d",num[0],num[1]);
  for(int i=2;i<=9;i++) {
    num[i]=num[i-2]+num[i-1];
    printf(",%d",num[i]);
  }
return 0;
}