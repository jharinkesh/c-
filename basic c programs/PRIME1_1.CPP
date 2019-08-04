// program for print prime numbers b/w 1to 100 //
#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,c=1;
clrscr();
for(n=1;n<=100;n++)
{
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
c=0;
break;
}
else
c=1;
}

if(c==1)
printf("%d ",n);
}
getch();
}