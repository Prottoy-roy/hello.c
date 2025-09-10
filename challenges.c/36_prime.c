#include <stdio.h>

int main(){
  int n;
  int i=1;
  while(i<=n){
    int n;
    printf("enter prime number:");
    scanf("%d",&n);
    if(n%2 != 1){
      printf("%d",n);
    }
  }
  return 0;
}