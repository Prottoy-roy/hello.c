#include <stdio.h>

int main () {
  int n;
  printf("enter:");
  scanf("%d",&n);
  if(n<0){
    printf("Negetive\n");
  }else if(n>0){
    printf("positive\n");
  }else{
    printf("Zero\n");
  }
  return 0;
}