#include<iostream.h>
#include<stdio.h>
#include<conio.h>
 //----------------------------Inheritance----------------------------------//
 ///-------------Use of pointer in inheritance/impure&pure virtual keyword--///

class parent
{
public:
	virtual void disp()         //when impure virtual is used no need to
	{                            // avoid scope but in pure virtual must
		cout<<"Parent\n";      // avoid scope of virtual void disp()
	}
       //	virtual void disp()=0;      //function. as.only used
};                                             // virtual void disp()=0;
class child:public parent//inheritance
{
public:
		void disp()

	   {
		cout<<"child\n";
	   }
};
void main()
{
	clrscr();
	//child *c=new child();//dynamic memory allocation
       //	c->disp();
       parent c;
	c.disp();
	getch();
}