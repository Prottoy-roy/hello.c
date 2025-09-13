#include <stdio.h>
void storetable(int arr[][10],int n,int m,int numbers);
int main(void)
{
  int tables[2][10];
  storetable(tables,0,10,2);//n=0,i=10,numbers=2
  storetable(tables,1,10,3);
  for(int i=0;i<10;i++)
  {
    printf("%d \t",tables[0][i]);//1st row
  }
  printf("\n");
  for(int i=0;i<10;i++)
  {
    printf("%d \t",tables[1][i]);//2nd row
  }
  return 0;
}
void storetable(int arr[][10],int n,int m,int numbers)
{
  for(int i=0;i<m;i++)//i<m = i<colums
  {
    arr[n][i]=numbers*(i+1);//n=rows,num=2,3
  }
}