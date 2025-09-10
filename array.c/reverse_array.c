#include <stdio.h>
//write a function to reverse an array
int reverse(int arr[],int n);
int numbers(int arr[],int n);
int main(void)
{
  int arr[]={1,2,3,4,5,6};
  reverse(arr,6);
  numbers(arr,6);
  return 0;
}
int reverse(int arr[],int n){
  for(int i=0;i<n/2;i++){
    int firstvalue=arr[i];
    int secvalue=arr[n-i-1];
    arr[i]=secvalue;
    arr[n-i-1]=firstvalue;
  }
}
int numbers(int arr[],int n){
  for(int i=0;i<n;i++){
    printf("%d \t",arr[i]);
  }
}