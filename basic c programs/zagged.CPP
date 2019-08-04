#include<stdio.h>
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int r,i,**a,c,j,*c1;
cout<<"enter number of rows";
cin>>r;
c1=new int[r];
for(j=0;j<r;j++)
{
cout<<"enter number of columns for row "<<j<<": ";
cin>>c;
c1[j]=c;
a[j]=new int[c];
}

for(i=0;i<r;i++)
{
for(j=0;j<c1[i];j++)
{
cout<<"enter value at a["<<i<<"]["<<j<<"]  ";
cin>>a[i][j];
}}

cout<<endl;
cout<<"matrix  is "<<endl<<endl;
for(i=0;i<r;i++)
{
for(j=0;j<c1[i];j++)
cout<<a[i][j];
cout<<"\n";
}

getch();
}