#include<iostream.h>
#include<stdio.h>
#include<conio.h>
 //----------------------------Inheritance----------------------------------//
 ///-------------Use of multiple inheritance/ambiguty problem--///

class mother
{
public:
	 void disp()
	{
		cout<<"Mother\n";
	}

};
class father
{
public:
		void disp()

	   {
		cout<<"Father\n";
	   }
};
class child:public mother,public father
{
};
void main()
{
	clrscr();
       child c;
	c.mother::disp();
	getch();
}