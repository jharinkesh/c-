//program for norms of array//
#include<malloc.h>
#include<stdio.h>
#include<conio.h>
void main()
{
int *p,i,r,n,sum=0,a;
clrscr();
printf("\n enter the size of the array  ");
scanf("%d",&n);

p=(int *)calloc(n,sizeof(int));

printf("\n enter the elements  ");
  for(i=0;i<n;i++)
  {
  scanf("%d",&p[i]);
  }

  printf("\n entered elements \n");

  for(i=0;i<n;i++)
  {
  printf("%d ",*(p+i));
  }

  for(i=0;i<n;i++)
  {
  a=p[i];
  while(a>0)
  {
  r=a%10;
  a=a/10;
  sum=sum+r*r;
  }

  p[i]=sum;
  sum=0;
  }


  printf("\nnorms are  ");
  for(i=0;i<n;i++)
  {
  printf("%d ",*(p+i));
  }



  getch();
  }