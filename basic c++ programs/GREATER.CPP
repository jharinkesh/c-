#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,b,c;
	cout<<"Enter no";
	cin>>a>>b>>c;
	if(a>b && a>c)
	{
		cout<<"a is greater";
	}
	else if(b>a && b>c)
	{
		cout<<"b is greater";
	}
	else
		cout<<"c is greater";

	getch();
}