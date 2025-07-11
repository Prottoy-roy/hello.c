#include<stdio.h>

void printfTable(int a);

int main() {
  int a;
  printf("enter a: ");
  scanf("%d",&a);
  printfTable(a); //actual parameter / argument
  return 0;
}
void printfTable(int a) { // formal parameter
  for(int i=1;i<=10;i++) {
    printf("%d \n",a*i);
  }
}