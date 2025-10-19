#include<stdio.h>
int main(void){
  FILE *fptr;
  fptr = fopen("test.txt","r");
  int num;
  fscanf(fptr,"%d",&num);
  printf("%d\t",num);
  fscanf(fptr,"%d",&num);
  printf("%d\t",num);
  fscanf(fptr,"%d",&num);
  printf("%d\t",num);
  fscanf(fptr,"%d",&num);
  printf("%d\t",num);
  fscanf(fptr,"%d",&num);
  printf("%d\t",num);
  fclose(fptr);
  return 0;
}