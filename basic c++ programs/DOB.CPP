#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int d,m,y,d1,m1,y1,d2,m2,y2,f,t;
cout<<"enter the current date";
cin>>d>>m>>y;
cout<<"Enter ur dob";
cin>>d1>>m1>>y1;
d2=d-d1;
m2=m-m1;
y2=y-y1;
f=(365*y2+30*m2+d2);
t=f/365;
cout<<t;
getch();
}
