#include<stdio.h>
void _name(char arr[]);
int main(void)
{
  char name[]="Prottoy";
  _name(name);
  return 0;
}
void _name(char arr[]){
  for(int i=0;arr[i] != '\0';i++){
    printf("%c",arr[i]);
  }
}