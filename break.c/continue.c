#include<stdio.h>
//this is program to except 6 for 1 to 10
int main() {
  for(int i=1;i<=5;i++) {
    if(i==3) {
      continue;
    }
    printf("%d \n",i);
  }
  return 0;
}