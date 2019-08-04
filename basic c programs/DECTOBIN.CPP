#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();

int n,r,t=1,sum=0;


puts("Enter the number");
scanf("%d",&n);

while(n>0)
{
r=n%2;
n=n/2;
sum=sum+r*t;
t=t*10;

}


printf("\n result is %d",sum);




getch();
}
