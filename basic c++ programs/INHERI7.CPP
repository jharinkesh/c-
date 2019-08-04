#include<iostream.h>
#include<conio.h>
#include<time.h>
///----------------------------------Constructor & Destructor in inheritance-----------///
class A
{
public:
	A()
	{
		cout<<"A cons\n";
	}
	~A()
	{
		cout<<"A dest\n";
	}
};

class B:public A
{
public:
	B()
	{
		cout<<"B cons\n";
	}
	~B()
	{
		cout<<"B dest\n";
	}

};
void main()
{
	clrscr();
	B b;
	getch();
}