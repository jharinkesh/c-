#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

class add
{
//protected:



public:

	int a;
	void cons()
	{
		cout<<"A constructor\n";

	}
	void abc()
	{
		a=10;
		cout<<a;
	}


};
void main()
{
	clrscr();
	add b,c;
	b.cons();
	c.abc();
	getch();

}
