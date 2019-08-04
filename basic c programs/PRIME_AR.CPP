//program for prime numof an array//
#include<stdio.h>
#include<conio.h>
void main()
{
int a[12],i,c=0,j,n;
clrscr();
printf("\n enter elements of array  ");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<10;i++)
{
n=a[i];
for(j=2;j<=n/2;j++)
{
if(n%j==0)
{
c=1;
break;
}
else
c=0;
}
if(c==0)
printf("%d ",n);
}


getch();
}







