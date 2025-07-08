#include<stdio.h>
//this is a program to find a character is upper case or not
int main(){
char n;
printf("enter upper case character: ");
scanf("%s",&n);
if(n >= 65 &&  n <= 90) {
  printf("upper case \n");
}else if(n >= 'a' && n <= 'z') {
  printf("lower case \n");
}else {
  printf("this is not a right character");
}
printf("thank you sir \n");
return 0;
}