#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
clrscr();

int n,a=0,b=0;
printf("\n enter the number");
scanf("%d",&n);


while(n>0)
{

printf(" %d %d",a,b);
a=a+b;
b=a+b;
n--;


}



getch();

}