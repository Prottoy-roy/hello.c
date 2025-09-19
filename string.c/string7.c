#include <stdio.h>
int length(char arr[]);
int main(void){
  char name[100];
  printf("enter your name:");
  fgets(name,100,stdin);
  // puts(name);
  printf("Name length is -->\t");
  printf("%d",length(name));
  return 0;
}
int length(char arr[]){
  int count=0;
  for(int i=0;arr[i]!='\0';i++){
    count++;
  }
  return count-1;
}