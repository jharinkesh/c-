#include<iostream.h>
#include<conio.h>
//WAP to display fabbonaci series.
void main()
{
	int a=0,b=1,n,c=0;
	clrscr();
	cout<<"Enter no";
	cin>>n;
	while(n>0)
	{
	b=a+b;
	cout<<b;
	cout<<" ";
	a=c;
	c=b;
	n--;
	}
	 getch();
}