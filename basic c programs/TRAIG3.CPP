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
for(k=0;k<i*2+1;k++)
{
printf("*");
}
printf("\n");
}
//for next lower triangle

for(i=4;i>0;i--)
{

for(j=0;j<5-i;j++)
{
printf(" ");
}

for(k=0;k<i*2-1;k++)
{

printf("*");
}
printf("\n");
}







getch();
}