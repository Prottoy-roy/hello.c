#include <stdio.h>

int main()
{
  // int score;
  // printf("enter score(0-100):");
  // scanf("%d",&score);
  // if((score>80 && score<=100)  && (score>=0)){
  //   printf("High\n");
  // }else if((score>50 && score<=80) && (score>=0 && score<=100)){
  //   printf("Moderate\n");
  // }else if((score>=0 && score<=100) && score<=50){
  //   printf("Low\n");
  // }
  // return 0;


  int score;
  printf("enter score(0-100):");
  scanf("%d",&score);

  (score>80 && score<=100) && (score>=0) ? printf("High\n") : printf("Moderate\n");
  
  return 0;
}