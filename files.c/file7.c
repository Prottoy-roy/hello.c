#include<stdio.h>
int main(void){
  FILE *fptr;
  fptr = fopen("text.txt","a");
  printf("\n");
  fputc('A',fptr);
  fputc('p',fptr);
  fputc('p',fptr);
  fputc('l',fptr);
  fputc('e',fptr);
  fclose(fptr);
  return 0;
}