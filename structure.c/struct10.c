#include<stdio.h>
typedef struct bank_account{
  int accountNo;
  char name[100];
}acc;
int main(void){
  acc acc1 = {12345,"prottoy"};
  acc acc2 = {12346,"prathona"};
  acc acc3 = {12347,"partho"};
  printf("acc number -> %d\n",acc1.accountNo);
  printf("name is -> %s\n",acc1.name);
  return 0;
}