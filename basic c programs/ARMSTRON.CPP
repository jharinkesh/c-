#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,sum=0,t;
clrscr();
printf("\n enter the number ");
scanf("%d",&n);
t=n;
while(n>0)
{
r=n%10;
n=n/10;
sum=sum+r*r*r;
}
if(sum==t)
printf("\n armstrong number ");
else
printf("\n no");
getch();
}