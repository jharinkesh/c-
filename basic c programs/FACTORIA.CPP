//program for factorial//
#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=1;
clrscr();
printf("\nenter the number");
scanf("%d",&n);
while(n>0)
{
i=i*n;
n--;}

printf("\n factorial is %d ",i);
getch();
}