#include<stdio.h>
#include<string.h>
struct student{
  int roll;
  float cgpa;
  char name[100];
};
int main(void){
  struct student ece[100];
  printf("ece students =>\n");
  //student roll => 1
  ece[0].roll=1616;
  ece[0].cgpa=7.50;
  strcpy(ece[0].name,"prottoy");
  printf("\t.roll num = %d\n",ece[0].roll);
  printf("\t.cgpa num = %f\n",ece[0].cgpa);
  printf("\t.student name = %s\n",ece[0].name);
  //student roll => 2
  ece[1].roll=1617;
  ece[1].cgpa=7.60;
  strcpy(ece[1].name,"prathona");
  printf("\t.roll num = %d\n",ece[1].roll);
  printf("\t.cgpa num = %f\n",ece[1].cgpa);
  printf("\t.student name = %s\n",ece[1].name);
  struct student coe[100];
  printf("coe students =>\n");
  //student roll => 1
  coe[0].roll=1650;
  coe[0].cgpa=7.20;
  strcpy(coe[0].name,"partho");
  printf("\t.roll num = %d\n",coe[0].roll);
  printf("\t.cgpa num = %f\n",coe[0].cgpa);
  printf("\t.student name = %s\n",coe[0].name);
  //student roll => 2
  coe[1].roll=1650;
  coe[1].cgpa=7.20;
  strcpy(coe[1].name,"prity");
  printf("\t.roll num = %d\n",coe[1].roll);
  printf("\t.cgpa num = %f\n",coe[1].cgpa);
  printf("\t.student name = %s\n",coe[1].name);
  struct student it[100];
  printf("it students =>\n");
  //student roll => 1
  it[0].roll=1650;
  it[0].cgpa=7.20;
  strcpy(it[0].name,"prianka");
  printf("\t.roll num = %d\n",it[0].roll);
  printf("\t.cgpa num = %f\n",it[0].cgpa);
  printf("\t.student name = %s\n",it[0].name);
  //student roll => 2
  it[1].roll=1650;
  it[1].cgpa=7.20;
  strcpy(it[1].name,"pritilota");
  printf("\t.roll num = %d\n",it[1].roll);
  printf("\t.cgpa num = %f\n",it[1].cgpa);
  printf("\t.student name = %s\n",it[1].name);
  return 0;
}