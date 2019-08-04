// program for calc power using function  //
#include<stdio.h>
#include<conio.h>
int power(int n,int p)
{
int i=1;
while(p>0)
{
i=i*n;
p--;
}
return i;
}



void main()
{
int n,r,p;
clrscr();
printf("\n enter the number & its power ");
scanf("%d%d",&n,&p);
r=power(n,p);
printf("\n the result is %d ",r);
getch();
}