//program for selection sort

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[10],min;
for(int i=0;i<5;i++)
{
cin>>a[i];
}

for(i=0;i<5;i++)
{
int k=i;
for(int j=i+1;j<5;j++)
{
if(a[j]<a[k])
k=j;
}
if(k!=i)
{
int temp=a[i];
a[i]=a[k];
a[k]=temp;
}}
cout<<"sorted elements are  ";
 for(i=0;i<5;i++)
{
cout<<a[i]<<" ";
}


getch();
}