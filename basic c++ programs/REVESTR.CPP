#include<iostream.h>
#include<string.h>
#include<conio.h>
void main()
{
clrscr();
char name[20];
cout<<"Enter ur name";
cin.get(name,20);
strrev(name);
cout<<name;
getch();
}