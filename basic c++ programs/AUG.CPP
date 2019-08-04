#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<time.h>
void main()
{
	int i,j;
	clrscr();
	time_t d;
	time(&d);
	cout<<ctime(&d)<<endl;
	for(i=1;i<=5;i++)
	cout<<"*";
	for(j=1;j<=5;j++)
	cout<<"*"<<endl;
	getch();
}

