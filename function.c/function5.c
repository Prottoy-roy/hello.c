#include<stdio.h>
void printfHello(int number);
int main() {
  printfHello(5);
  return 0;
}
void printfHello(int number) {
  if(number==0){
    return;
  }
  printf("Hi..! \n");
  printfHello(number-1);
}