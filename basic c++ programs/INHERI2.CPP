#include<iostream.h>
#include<stdio.h>
#include<conio.h>
//----------------------------Inheritance----------------------------------//
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
	parent c;
	c.disp();
	getch();
}