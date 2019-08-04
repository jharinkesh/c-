
//program for norms of number//
#include<stdio.h>
#include<conio.h>
void main()
{

int n,r,sum=0;
clrscr();
printf("\n enter the number ");
scanf("%d",&n);
while(n>0)
{
 r=n%10;
 n=n/10;
 sum=sum+r*r;
 }
 printf("\n norms is %d",sum);
 getch();
 }
