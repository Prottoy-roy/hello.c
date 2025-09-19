#include<stdio.h>
void name(char arr[]);
int main(void)
{
  char first_name[]={'p','r','o','t','t','o','y','\0'};
  char last_name[]={'r','o','y','\0'};
  name(first_name);
  name(last_name);
  return 0;
}
void name(char arr[]){
  for(int i=0;arr[i]!='\0';i++){
    printf("%c",arr[i]);
  }
  printf("\t");
}