#include <stdio.h>

int main(){
  int n;
  printf("enter n:");
  scanf("%d",&n);
  int sum=0;
  for(int i=1;i<=n;i++){
    if(i%2 != 0){
      sum=sum+i; //sum of odd numbers
    }
  }
  printf("%d\n",sum);
  return 0;
}