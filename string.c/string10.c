#include<stdio.h>
#include<string.h>
int main(void)
{
  char old_name[]="prottoy <3\t";
  char new_name[]="prathona";
  strcat(old_name,new_name);
  puts(old_name);
  return 0;
}