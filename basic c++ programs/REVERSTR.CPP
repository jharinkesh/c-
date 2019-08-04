#include<iostream.h>
#include<conio.h>
//wap to display reverse string
void main()
{
clrscr();
char name[20];
cout<<"enter urname";
cin.get(name,20);
int i;
for(i=0;name[i]!='\0';i++);
for(int j=i-1;j>=0;j--)
cout<<name[j];
getch();
}
