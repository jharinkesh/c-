
//program for factorial of each digit//
#include<stdio.h>
#include<conio.h>
void main()
{
 int n,r,i=1;
 clrscr();
 printf("\n enter the number  ");
 scanf("%d",&n);
 while(n>0)
 {
 r=n%10;
 n=n/10;

 while(r>0)
 {
 i=i*r;
 r--;
 }
 printf("\n factorial is %d ",i);
 i=1;
 }





 getch();
 }