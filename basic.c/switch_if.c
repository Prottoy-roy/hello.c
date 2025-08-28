#include<stdio.h>

int main(){
  int day;
  printf("enter a day(1-7):");
  scanf(" %d",&day);
  if(day==1) {
    printf("$-today is satarday-$\n");
  }
  else if(day==2) {
    printf("$-today is Sunday-$\n");
  }
  else if(day==3) {
    printf("$-today is monday-$\n");
  }
  else if(day==4) {
    printf("$-today is tuesday-$\n");
  }
  else if(day==5) {
    printf("$-today is wednesday-$\n");
  }
  else if(day==6) {
    printf("$-today is thursday-$\n");
  }
  else if(day==7) {
    printf("$-today is friday-$\n");
  }
  return 0;
}