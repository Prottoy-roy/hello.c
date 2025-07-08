#include<stdio.h>
//keep taking numbers as input from user untill user add a "odd number"
int main() {
  int n;
  for(;;) {
    printf("enter number: ");
    scanf("%d",&n);
    printf("%d \n",n);

    if( n%2 != 0) {
      break;
    }
  }
  printf("end");
  return 0;
} 