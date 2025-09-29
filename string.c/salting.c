#include <stdio.h>
#include <string.h>
void salting(char password[]);
int main(void)
{
  char password[100];
  scanf("%s",password);
  salting(password);
  return 0;
}
void salting(char password[]){
  char salt[]="123";
  char new_password[200];
  strcpy(new_password,password);
  strcat(new_password,salt);
  puts(new_password);
}