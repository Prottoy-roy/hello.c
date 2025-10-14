#include<stdio.h>
int main(void){
  FILE *fptr;
  fptr = fopen("newtext.txt","r"); //mode -> read
  int num;
  fscanf(fptr,"%d",&num);
  printf("num is = %d\n",num);
  fscanf(fptr,"%d",&num);
  printf("num is = %d\n",num);
  fscanf(fptr,"%d",&num);
  printf("num is = %d\n",num);
  fclose(fptr);
  return 0;
}