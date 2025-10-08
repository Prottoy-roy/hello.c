#include<stdio.h>
struct vector{
  int x;
  int y;
};
void sumcalc(struct vector v1,struct vector v2,struct vector sum);
int main(void){
  struct vector v1 ={5,10};
  struct vector v2 ={3,7};
  struct vector sum ={0};
  sumcalc(v1,v2,sum);
  return 0;
}
void sumcalc(struct vector v1,struct vector v2,struct vector sum){
  sum.x = v1.x + v2.x;
  sum.y = v1.y + v2.y;
  printf("vector 1 -> %d\n",sum.x);
  printf("vector 2 -> %d\n",sum.y);
}