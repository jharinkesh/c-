// program for cheking prime numbers  //
#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,c;
clrscr();
printf("\n enter the number ");
scanf("%d",&n);
for(i=2;i<n/2;i++)
{
if(n%i==0)
{
c=0;
break;
}
}

if(c==0)
printf("\n not prime numbers ");
else
printf("\n prime number");
getch();
}