//program for palindrome number//
#include<stdio.h>
#include<conio.h>
void main()
{
int n,rev=0,r,n1;
clrscr();
printf("\n enter the number  ");
scanf("%d",&n);
n1=n;
while(n>0)
{
r=n%10;
n=n/10;
rev=rev*10+r;
}

if(rev==n1)
printf("\n palindrome number  ");
else
printf("no");
getch();
}
