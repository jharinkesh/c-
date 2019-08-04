#include<iostream.h>
#include<conio.h>
//wap to display revers number.
void main()
{
clrscr();
int n[5],i;

cout<<"Enter the five no.";
for(i=0;i<=5;i++)
{
	cin>>n[i];
}
for(i=5;i>=0;i--)
{
		cout<<n[i];
}

	getch();
}

