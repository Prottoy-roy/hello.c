//print all the odd number of 5 to 50
#include<stdio.h>

int main() {
  for(int i=5;i<=50;i++) {

    if(i%2 == 0) {
      continue;
    }
    // if(i%2 != 0) {
    //   printf("%d \n",i);
    // }
    printf("%d \n",i);
  }
  return 0; 
}