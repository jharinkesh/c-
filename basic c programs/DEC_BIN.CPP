#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,a[10],sum=0;
clrscr();

printf("\n enter the number  ");
scanf("%d",&n);
while(n>0)
{
r=n%2;
n=n/2;
sum=sum+1;
a[sum]=r;
}

printf("\n binery conversion is  ");
for(n=sum;n>0;n--)
{
printf("%d ",a[n]);
}

getch();
}
