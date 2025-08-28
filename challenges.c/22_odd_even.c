#include <stdio.h>

int main() {
  int n;
  printf("enter user input :");
  scanf(" %d",&n);
  if(n%2 == 0) {
    printf("even\n");
  }else{
    printf("odd\n");
  }
  return 0;
}