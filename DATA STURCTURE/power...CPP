#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<math.h>
int sqr(int a,int b);
void main()
{
clrscr();
int a,b,r=1;
printf("\n entre a & b  ");
scanf("%d%d",&a,&b);
for(int i=0;i<b;i++)
{
r=r*a;
}
printf("%d  ",r);
getch();
}
}