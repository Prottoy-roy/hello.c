//write a program to all odd numbers to 1 to n and add into a file
#include<stdio.h>

int main(void){
  FILE *fptr;
  fptr = fopen("odd-num.txt","w");

  int n;
  printf("Enter num:\n");
  scanf("%d",&n);

  for(int i=0;i<=n;i++){
    if(i%2!=0){
      fprintf(fptr,"%d\t",i);
    }
  }
  fclose(fptr);
  return 0;
}