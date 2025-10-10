#include <stdio.h>
struct complex{
  int real;
  int img;
};
int main(void){
  struct complex number1 = {8,5};
  struct complex *ptr;
  ptr = &number1;
  printf("real number %d\n",ptr->real);
  printf("img number %d\n",ptr->img);
}
