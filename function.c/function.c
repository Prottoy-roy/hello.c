#include<stdio.h>
void printfNamaste();
void printfBonjour();

int main() {
  char ch;
  printf("'f' for french and 'i' for indian:");
  scanf("%c",&ch);
  if(ch == 'i') {
    printfNamaste();
  }else {
    printfBonjour();
  }
  // printfNamaste(); @main function inderectly call "printfBonjour" function
  return 0;
}
void printfNamaste() {
  printf("Namaste \n");
  // printfBonjour();
}
void printfBonjour() {
  printf("Bonjour \n");
}