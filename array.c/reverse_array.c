#include <stdio.h>
//write a function to reverse an array
int reverse(int arr[]);
int main(void)
{
  int arr[]={1,2,3,4,5,6};
  reverse(arr);
  return 0;
}
int reverse(int arr[]){
  for(int i=5;i>=0;i--){
    printf("%d\n",arr[i]);
  }
}