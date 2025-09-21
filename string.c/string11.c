#include<stdio.h>
#include<string.h>
int main(void)
{
  //HHA(65) - HHB(66)[-1]
  // char first_str[]="HHA";
  // char sec_str[]="HHB";
  //HHB(66) - HHA(65)[1]
  // char first_str[]="HHB";
  // char sec_str[]="HHA";
  // //HHH - HHH [0]
  char first_str[]="HHH";
  char sec_str[]="HHH";
  printf("%d",strcmp(first_str,sec_str));
  return 0;
}