#include<iostream.h>
#include<stdio.h>
#include<conio.h>

void main()
{
	int n,num,r,sum=0;
	clrscr();

	printf(" enter");
	scanf("%d",&num);
	n=num;
	while(num>0)
	{
	r=num%10;
       sum=sum+r*r*r;   //armstrong
       //	sum=sum+r;                   //sum of each digit
	num=num/10;
	}
      if(sum==n)
		printf("yes");
	else
		printf("no");
	// printf("sum=%d\t%d",r,n);
	getch();
}