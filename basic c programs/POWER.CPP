#include<stdio.h>
#include<conio.h>
void main()
{
int n,p,i=1;
clrscr();
printf("\n enter the number & power ");
scanf("%d%d",&n,&p);
while(p>0)
{
i=i*n;
p--;
}
printf("\n result is %d  ",i);
getch();
}

