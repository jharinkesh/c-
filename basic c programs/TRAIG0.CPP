#include<stdio.h>
#include<conio.h>
void main()
{
int i=0,j=0;
clrscr();
for(;i<5;i++)
{
for(j=0;j<=i;j++)
{
printf("*");
}
printf("\n");
}
getch();
}