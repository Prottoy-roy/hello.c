#include <stdio.h>

int main(void)
{
  int arr[2][3][2]= //arr[2]=pages,[3]=rows,[2]=columns
  {
    {               //page-1 = 0
      {1},          //row = 0
      {2,3},        //row = 1
      {2}           //row = 2
    },            
    {               //page-2 = 1
      {5},          //row = 0
      {6,7},        //row = 1
      {9},          //row = 2
    }
  };
  printf("%d",arr[0][1][1]); //out-put = 3
  return 0;
}