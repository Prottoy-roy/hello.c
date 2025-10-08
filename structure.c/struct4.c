#include<stdio.h>
struct student{
  int roll;
  float cgpa;
  char name[100];
};
int main(void){
  struct student s1 = {1012,7.50,"prathona"};
  struct student *ptr;
  ptr = &s1;
  //pointer dot . orarator
  printf("roll number is = %d\n",(*ptr).roll);
  printf("cgpa num is = %f\n",(*ptr).cgpa);
  printf("name is = %s\n",(*ptr).name);
  //pointer arrow -> oparator
  printf("roll number -> %d\n",ptr->roll);
  printf("cgpa is -> %f\n",ptr->cgpa);
  printf("name is -> %s\n",ptr->name);
  return 0;
}