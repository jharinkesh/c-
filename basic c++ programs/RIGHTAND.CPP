#include<conio.h>
#include<iostream.h>
#include<stdio.h>
#include<iomanip.h>
void main()
{
	clrscr();
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		cout<<"*";cout<<"\n";
	}
		for(i=1;i<=5;i++)
	      {
		for(k=5-i;k>=1;k--)
		cout<<" ";
		for(j=1;j<=i;j++)
		cout<<"#";
		cout<<endl;
	      }

	getch();
}

