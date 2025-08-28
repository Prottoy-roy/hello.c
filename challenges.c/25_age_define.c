#include <stdio.h>
int main() {
  int age;
  printf("enter age: \n");
  scanf("%d",&age);
  if(age>0 && age<=13){
    printf("child\n");
  }else if(age>0 && age<=20){
    printf("teenager\n");
  }else if(age>0 && age<=60){
    printf("adult\n");
  }else if(age>60 && age<=100){
    printf("senior\n");
  }else{
    printf("Death\n");
  }
  printf("Thank you\n");
  return 0;
}