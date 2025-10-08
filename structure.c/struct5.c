#include<stdio.h>
struct student{
  int roll;
  float cgpa;
  char name[100];
};
void printinfo(struct student s1);
int main(void){
  struct student s1 = {1220,7.80,"prathona"};
  printinfo(s1);
  return 0;
}
void printinfo(struct student s1){
  printf("Student info:\n");
  printf("roll number -> %d\n",s1.roll);
  printf("cgpa number -> %f\n",s1.cgpa);
  printf("name is -> %s\n",s1.name);
}