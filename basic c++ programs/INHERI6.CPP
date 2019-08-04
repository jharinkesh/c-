#include<iostream.h>
#include<conio.h>
#include<time.h>
///----------------------------------multilevel inheritance-----------///
class A
{
public:


	int a;
	//{
	 //cout<<a;
       //	}
};

class B:public A{};
class C:public A{};
class D:public B,public C{};

void main()
{
	clrscr();
	time_t t;
	time(&t);
	D d;
	d.C::a=10;
	cout<<d.C::a<<endl;
	window(10,10,50,11);
	cout<<ctime(&t);
	getch();
}