#include<stdio.h>
//keep taking numbers as input from user untill user add a "odd number"
int main() {
  int number;
  printf("enter input from user : ");
  scanf("%d",&number);
  for(int i=1;i<=number;i++) {
    if(!(number%2==0)){
      printf("end thak you");
      break;
    }
    printf("%d \n",i);
  }
  return 0;
} 