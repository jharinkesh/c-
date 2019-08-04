#include<conio.h>
#include<stdio.h>
#include<iostream.h>

void main()
{
int a[6];

for(int i=0;i<6;i++)
scanf("%d",&a[i]);

int t,min,loc;

for(i=0;i<6;i++)
{
min=a[i];
loc=i;

for(int j=i+1;j<6;j++)
{
if(a[j]<min)
{
min=a[j];
loc=j;
}
}

t=a[i];
a[i]=a[loc];
a[loc]=t;

}

cout<<"\n";

for(i=0;i<6;i++)
cout<<"  "<<a[i];





getch();

}