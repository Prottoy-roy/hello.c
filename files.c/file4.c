#include<stdio.h>
int main(void){
  FILE *fptr;
  fptr = fopen("text.txt","w"); //mode -> write
  fprintf(fptr,"%c",'A');
  fprintf(fptr,"%c",'p');
  fprintf(fptr,"%c",'p');
  fprintf(fptr,"%c",'l');
  fprintf(fptr,"%c",'e');
  return 0;
}