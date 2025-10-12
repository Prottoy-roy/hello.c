#include<stdio.h>
int main(void){
  FILE *fptr;
  fptr = fopen("text.txt","r");
  char ch;
  fscanf(fptr,"%c",&ch);
  printf("file is = %c\n",ch);
  fscanf(fptr,"%c",&ch);
  printf("file is = %c\n",ch);
  fscanf(fptr,"%c",&ch);
  printf("file is = %c\n",ch);
  fscanf(fptr,"%c",&ch);
  printf("file is = %c\n",ch);
  fscanf(fptr,"%c",&ch);
  printf("file is = %c\n",ch);
  fclose(fptr);
  return 0;
}