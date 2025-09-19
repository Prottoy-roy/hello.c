#include <stdio.h>
void _name(char arr[]);
int main(void)
{
  char name[100];
  printf("enter name:");
  scanf("%99s",&name);
  _name(name);
  return 0;
}
void _name(char arr[]){
  for(int i=0;arr[i]!='\0';i++){
    printf("%c",arr[i]);
  }
}