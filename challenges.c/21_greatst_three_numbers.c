#include <stdio.h>

int main() {
  int a=12;
  int b=5;
  int c=4;
  if(a>b && a>c) {
    printf("%d",a);
  }else if(b>a && b>c){
    printf("%d",b);
  }else if(c>a && c>b) {
    printf("%d",c);
  }
  return 0;
}