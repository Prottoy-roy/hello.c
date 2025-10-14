#include<stdio.h>
int main(void){
  FILE *fptr;
  fptr = fopen("text.txt","a");// mode -> appent
  fprintf(fptr,"\t%c",'M');
  fprintf(fptr,"%c",'a');
  fprintf(fptr,"%c",'n');
  fprintf(fptr,"%c",'g');
  fprintf(fptr,"%c",'o');
  return 0;
}