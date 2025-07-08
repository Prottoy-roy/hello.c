#include<stdio.h>
//keep taking numbers as input from user untill user add a "odd number"
int main() {
  int n;
  printf("enter input from user : ");
  scanf("%d",&n);
  for(int i=1;i<=n;i++) {
    if(!( n%2 == 0)){
      printf("end");
      break;
    }
    printf("%d \n",i);
  }
  return 0;
} 