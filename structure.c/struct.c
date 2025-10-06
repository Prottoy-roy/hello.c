#include <stdio.h>
#include <string.h>
struct student{
  int roll;
  float cgpa;
  char name[100];
};
int main(void){
  struct student s1;
  s1.roll=1616;
  s1.cgpa=7.50;
  // s1.name="prottoy";
  strcpy(s1.name,"prottoy");
  printf("roll is = %d\n",s1.roll);
  printf("cgpa is = %f\n",s1.cgpa);
  printf("name is = %s\n",s1.name);
  return 0;
}