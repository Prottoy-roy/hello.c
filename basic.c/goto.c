#include <stdio.h>
//this is a program like infinite loop.
int main() {
  int age;
  _age: //label for goto
  printf("enter your age:");
  scanf(" %d",&age);
  if(age != 29) {
    goto _age;
  }
  return 0;
}