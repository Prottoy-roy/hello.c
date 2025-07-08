#include<stdio.h>
//keep taking number as input from user untill user enter a number which is multiple of 7
int main() {
  int n;
  for(;;) {
    printf("enter number: ");
    scanf("%d",&n);
    printf("%d \n",n);

    if(n%7 == 0){
      break;
    }
  }
  printf("end \n");
  return 0;
}