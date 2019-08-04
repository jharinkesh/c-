#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
clrscr();
for(i=0;i<5;i++)
{
for(j=4-i;j>0;j--)
{
printf(" ");
}
for(k=0;k<=i;k++)
{
printf("*");
}
printf("\n");
}
getch();
}