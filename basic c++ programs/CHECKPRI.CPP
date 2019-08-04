#include<iostream.h>
#include<conio.h>
void main()
{
	int num,n,c=2;
	clrscr();
	cout<<"enter no";
	cin>>num;
	while(c<num)
	{
	if(num%c==0)
		break;
		c++;
	}
	if(num==c)
		cout<<"yes";
	else
		cout<<"no";
	getch();
}