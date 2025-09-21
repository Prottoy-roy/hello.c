#include <stdio.h>
#include <string.h>
int main(void)
{
  char old_name[50]="prottoy";
  char new_name[50]="prathona";
  strcpy(new_name,old_name);
  puts(new_name);
  return 0;
}