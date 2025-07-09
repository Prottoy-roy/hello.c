//this is a program to check a number is prime or not
#include<stdio.h>
int main(){
  int number;
  for(;;){
    printf("enter number: ");
    scanf("%d",&number);
    printf("%d \n",number);

    if(number%2 != 0){
      printf("prime number \n");
    }else {
      printf("not a prime number \n");
      break;
    }
  }
  return 0;
}