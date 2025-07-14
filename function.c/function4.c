#include<stdio.h>

void printfHello(int a);

int main() {
  printfHello(5);
  return 0;
}
//recursive function
void printfHello(int a) {
  if(a==0){
    return;
  }
  printf("hello \n");
  printfHello(a-1);
}