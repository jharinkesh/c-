#include<conio.h>
#include<stdio.h>
int count[150];
void main()
{
  clrscr();
  for(int k=0;k<150;k++)
  {
  count[k]=0;
  }

  char ch[100];

  printf("\n enter the name   ");
  gets(ch);
  for(int j=0;j<100;j++)
  {
  for(int i=97;i<=122;i++)
  {
   if(ch[j]==i)
   {
    count[i]=count[i]+1;
   }

  }}

  //
  clrscr();
  for(j=97;j<=122;j++)
  {
  if(count[j]!=0)
  {
  printf("\n %c has repeated  %d times  ",j,count[j]);
  }
  }
  getch();
  }