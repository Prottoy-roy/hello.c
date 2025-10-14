#include<stdio.h>
int main(void){
  FILE *fptr;
  fptr = fopen("newtext.txt","w");
  if(fptr == NULL){
    printf("file doesnot exist");
  }else{
    fclose(fptr);
  }
  return 0;
}