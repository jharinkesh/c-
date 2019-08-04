#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
long age,sal;
cout<<"Enter the age and sal:";
cin>>age>>sal;
if(age<=25 ^ sal>35000)   //exor
	cout<<"A grade";
else if(age<=35 ^ sal>25000)
	cout<<"B grade";
else
	cout<<"C grade";

	getch();
}