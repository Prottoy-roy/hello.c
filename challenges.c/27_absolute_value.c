#include <stdio.h>

int main(){
  int User_input;
  printf("User_input:");
  scanf("%d",&User_input);
  if(User_input>0){
    printf("%d",User_input);
  }else if(User_input<0){
    printf("%d",-User_input);
  }
  return 0;
}