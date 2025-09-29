#include<stdio.h>
#include<string.h>
void slice(char str[],int m,int n);
int main(void)
{
  char str[]="helloword";//slice from 3 to 6
  slice(str,3,6);
  return 0;
}
void slice(char str[],int m,int n){
  char newstr[100];
  int j=0;
  for(int i=m;i<=n;i++,j++){
    newstr[j]=str[i];
  }
  newstr[j]='\0';
  puts(newstr);
}