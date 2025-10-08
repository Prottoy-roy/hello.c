#include<stdio.h>
typedef struct student{
  char name[100];
  float cgpa;
  int roll;
}stu; //stu is a nickname of student
void stuinfo(struct student s1);
int main(void){
  stu s1 = {"prottoy",7.50,1010};
  stuinfo(s1);
  return 0;
}
void stuinfo(struct student s1){
  printf("Student info:\n");
  printf("name is %s\n",s1.name);
  printf("cgpa is %f\n",s1.cgpa);
  printf("roll is %d\n",s1.roll);
}