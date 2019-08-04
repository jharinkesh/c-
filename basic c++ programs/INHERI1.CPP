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
//public:                          |  when comment remover only child c/d
  //	void disp()                |  because child has its own function &
    //	{                          |  class. e.g- son take money from father
	//	cout<<"child\n";   |  till he does not earn, when he started
      //	}                  |  earning it does not take.
};
void main()
{
	clrscr();
	child c;
	c.disp();
	getch();
}