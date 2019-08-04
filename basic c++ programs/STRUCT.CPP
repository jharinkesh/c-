#include<iostream.h>
#include<stdio.h>
#include<conio.h>

struct abc
{
char name;
int roll;
};abc a;

void main()
{
clrscr();
cout<<"Enter name";
cin>>a.name;
cout<<"Enter roll";
cin>>a.roll;
cout<<a.name<<a.roll;
getch();
}