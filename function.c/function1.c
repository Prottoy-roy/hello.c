#include<stdio.h>

void printfHello();
void printfGoodbye();

int main(){
  printfHello();
  printfGoodbye();
  return 0;
}

void printfHello() {
  printf("Hello! \n");
}

void printfGoodbye() {
  printf("Good bye \n");
}