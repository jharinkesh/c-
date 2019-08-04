#include<iostream.h>
#include<stdio.h>
#include<conio.h>
 //----------------------------Inheritance----------------------------------//
 ///-------------Use of pointer in inheritance/dynamic memory allocation--///

class parent
{
public:
	void disp()
	{
		cout<<"Parent\n";
	}
};
class child:public parent//inheritance
{
public:
	void disp()
	{
		parent::disp();    //contribution to their childern in
		cout<<"child\n";          // house bulding. i.e. use of
	}                                    // scope resolution operator
};
void main()
{
	clrscr();
	child *c=new child();//dynamic memory allocation
	c->disp();
       //	parent c;
       //	c.disp();
	getch();
}