#include <stdio.h>
void name(char arr[]);
int main(void)
{
  char _name[] = {'P','R','O','T','T','O','Y','\0'};
  name(_name);
  return 0;
}
void name(char arr[]){
  for(int i=0;arr[i] != '\0';i++){
    printf("%c",arr[i]);
  }
}