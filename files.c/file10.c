//write a program to input student information from user & enter it to a file
#include<stdio.h>
int main(void){
  FILE *fptr;
  fptr = fopen("stu-info.txt","w");

  char name[100];
  int roll;
  float cgpa;

  printf("Enter name:\n");
  scanf("%s",name);
  printf("Enter roll:\n");
  scanf("%d",&roll);
  printf("Enter cgpa:\n");
  scanf("%f",&cgpa);

  fprintf(fptr,"student name: %s\n",name);
  fprintf(fptr,"student roll: %d\n",roll);
  fprintf(fptr,"student cgpa: %f",cgpa);

  fclose(fptr);
  return 0;
}