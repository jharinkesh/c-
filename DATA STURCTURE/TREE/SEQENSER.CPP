#include<iostream.h>
#include<conio.h>
void main()
{
int a[10],key,i,count;
clrscr();
cout<<"enter the values";
for(i=0;i<10;i++)
{
cin>>a[i] ;
}
cout<<"enter key value to be serched";
cin>>key;
for(i=0;i<10;i++)
{
if(key==a[i])
{
cout<<"item available with position is"<<i+1; break;
}
else
{
count=0;
}
}
cout<<count;
if(count==0)
cout<<"item not found.....";
	getch();
}