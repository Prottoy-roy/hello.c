//enter address (house no,block,city,state) of 5 people
#include<stdio.h>
struct address{
  int houseNo;
  int block;
  char city[100];
  char state[100];
};
void personinfo(struct address add);
int main(void){
  struct address adds[5];
  printf("Enter info person-1:\n");
  scanf("%d",&adds[0].houseNo);
  scanf("%d",&adds[0].block);
  scanf("%s",adds[0].city);
  scanf("%s",adds[0].state);
  printf("Enter info person-2:\n");
  scanf("%d",&adds[1].houseNo);
  scanf("%d",&adds[1].block);
  scanf("%s",adds[1].city);
  scanf("%s",adds[1].state);
  printf("Enter info person-3:\n");
  scanf("%d",&adds[2].houseNo);
  scanf("%d",&adds[2].block);
  scanf("%s",adds[2].city);
  scanf("%s",adds[2].state);
  printf("Enter info person-4:\n");
  scanf("%d",&adds[3].houseNo);
  scanf("%d",&adds[3].block);
  scanf("%s",adds[3].city);
  scanf("%s",adds[3].state);
  printf("Enter info person-5:\n");
  scanf("%d",&adds[3].houseNo);
  scanf("%d",&adds[3].block);
  scanf("%s",adds[3].city);
  scanf("%s",adds[3].state);
  personinfo(adds[0]);
  personinfo(adds[1]);
  personinfo(adds[2]);
  personinfo(adds[3]);
  personinfo(adds[4]);
  return 0;
}
void personinfo(struct address add){
  printf("Address is: %d, %d, %s, %s\n",add.houseNo,add.block,add.city,add.state);
}