// program for binary tree..

#include<iostream.h>
#include<conio.h>
void create();
void pre(int i);
void post(int i);
void inord(int i);
void disp();
char tree[20];
int i,n;
void main()
{
create();
disp();
cout<<"\npreorder  ";
pre(1);
cout<<"\n postorder ";
post(1);
cout<<"\n inorder  ";
inord(1);
getch();
}

void create()
{
clrscr();
cout<<"\n enter number of node";
cin>>n;
cout<<"\n enter values  ";
for(i=1;i<=n;i++)
{
cin>>tree[i];
}
 }
void disp()
{
cout<<"\n entered values are   ";
for(i=1;i<=n;i++)
{
cout<<tree[i]<<" ";
}
}

void pre(int i)
{
if(tree[i]!='\0')
{
cout<<tree[i]<<" ";
pre(i*2);
pre(i*2+1);
}
}

void post(int i)
{
if(tree[i]!=NULL)
{
post(i*2);
post(i*2+1);
cout<<tree[i]<<" ";
}
}

void inord(int i)
{
if(tree[i]!=NULL)
{
inord(i*2);
cout<<tree[i]<<" ";
inord(i*2+1);
}}