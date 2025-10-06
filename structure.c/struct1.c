#include<stdio.h>
#include<string.h>
struct student{
  int roll;
  float cgpa;
  char name[100];
};
int main(void){
  struct student s1;//s1=student-1
  s1.roll = 1012;
  s1.cgpa = 7.50;
  strcpy(s1.name,"prottoy");
  printf("roll is = %d\n",s1.roll);
  printf("cgpa is = %f\n",s1.cgpa);
  printf("name is = %s\n",s1.name);
  struct student s2;//s2=student-2
  s2.roll = 1014;
  s2.cgpa = 7.80;
  strcpy(s2.name,"prathona");
  printf("roll is = %d\n",s2.roll);
  printf("cgpa is = %f\n",s2.cgpa);
  printf("name is = %s\n",s2.name);
  struct student s3;//s3=student-3
  s3.roll = 1012;
  s3.cgpa = 8.50;
  strcpy(s3.name,"partho");
  printf("roll is = %d\n",s3.roll);
  printf("cgpa is = %f\n",s3.cgpa);
  printf("name is = %s\n",s3.name);
  return 0;
}