#include<stdio.h>
struct student{
  int roll;
  float cgpa;
  char name[100];
};
int main(void){
  struct student s1 = {1212,7.50,"prottoy"};
  printf("Roll number is = %d\n",s1.roll);
  printf("Cgpa number is = %f\n",s1.cgpa);
  printf("Student name is = %s\n",s1.name);
  return 0;
}