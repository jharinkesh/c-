// program for reversing digit//
#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,rev=0;
clrscr();

printf("\n enter the digit ");
scanf("%d",&n);
while(n>0)
{
 r=n%10;
n=n/10;
rev=rev*10+r;
}
printf("\n revese is %d",rev);

getch();
}