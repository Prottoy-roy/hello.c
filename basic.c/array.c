#include<stdio.h>
#include<conio.h>
int main(){
  int num[7],i;
  printf("enter value: \n");
  for(i=0;i<=6;i++) //0 to 6 index number[array] 
  {
    scanf("%d",&num[i]);
  }
  printf("output:");
  for(i=0;i<=6;i++)
  {
    printf("%d \n",num[i]);
  }
  return 0;
}