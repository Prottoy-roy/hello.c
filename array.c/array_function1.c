#include <stdio.h>
//write a function to count the number of odd numbers in an array
int odd(int arr[],int n);
int main(void)
{
  int arr[]={1,2,3,4,5,6};
  printf("%d",odd(arr,6));// out-put = 3 odd numbers
  return 0;
}
int odd(int arr[],int n){
  int count = 0;
  for(int i=0;i<n;i++){
    if(arr[i]%2 != 0){
      count++;
    }
  }
  return count;
}