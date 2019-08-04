#include<iostream.h>
#include<string.h>
#include<conio.h>
void main()
{
char name[20];
cout<<"enter ur name";
cin.get(name,20);
int i=strlen(name);
for(int j=i-1;j>=0;j--)
cout<<name[j];
getch();
}