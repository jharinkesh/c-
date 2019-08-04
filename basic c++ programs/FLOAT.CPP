#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int m1,m2,m3;
float per;
cout<<"Enter the marks of three sub:"<<endl;
cin>>m1>>m2>>m3;
per=(float)(m1+m2+m3)/3; //here float is a type casting
			//if we use like this (m1+m2+m3)/3.0 also give
			// float value but it is knowns as implicit.
cout<<"Percent is: "<<per;
getch();
}