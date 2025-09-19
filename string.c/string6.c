#include<stdio.h>
//fgets is input and puts is output
int main(void){
  char name[20];
  fgets(name,20,stdin);
  puts(name);
  return 0;
}